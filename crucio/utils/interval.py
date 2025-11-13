from dataclasses import dataclass


@dataclass
class Interval:
    left: int
    right: int

    def isSuper(self, interval: "Interval"):
        return self.left <= interval.left and self.right >= interval.right

    def isSub(self, interval: "Interval"):
        return interval.left <= self.left and interval.right >= self.right

    def isConflict(self, interval: "Interval"):
        return self.isIntersection(interval) and not (self.isSuper(interval) or self.isSub(interval))

    def isIntersection(self, interval: "Interval"):
        return not (self.right <= interval.left or interval.right <= self.left)
