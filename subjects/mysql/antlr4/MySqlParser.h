
// Generated from MySqlParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  MySqlParser : public antlr4::Parser {
public:
  enum {
    SPACE = 1, SPEC_MYSQL_COMMENT = 2, COMMENT_INPUT = 3, LINE_COMMENT = 4, 
    ADD = 5, ALL = 6, ALTER = 7, ALWAYS = 8, ANALYZE = 9, AND = 10, AS = 11, 
    ASC = 12, BEFORE = 13, BETWEEN = 14, BOTH = 15, BY = 16, CALL = 17, 
    CASCADE = 18, CASE = 19, CAST = 20, CHANGE = 21, CHARACTER = 22, CHECK = 23, 
    COLLATE = 24, COLUMN = 25, CONDITION = 26, CONSTRAINT = 27, CONTINUE = 28, 
    CONVERT = 29, CREATE = 30, CROSS = 31, CURRENT = 32, CURRENT_USER = 33, 
    CURSOR = 34, DATABASE = 35, DATABASES = 36, DECLARE = 37, DEFAULT = 38, 
    DELAYED = 39, DELETE = 40, DESC = 41, DESCRIBE = 42, DETERMINISTIC = 43, 
    DIAGNOSTICS = 44, DISTINCT = 45, DISTINCTROW = 46, DROP = 47, EACH = 48, 
    ELSE = 49, ELSEIF = 50, EMPTY = 51, ENCLOSED = 52, ESCAPED = 53, EXISTS = 54, 
    EXIT = 55, EXPLAIN = 56, FALSE = 57, FETCH = 58, FOR = 59, FORCE = 60, 
    FOREIGN = 61, FROM = 62, FULLTEXT = 63, GENERATED = 64, GET = 65, GRANT = 66, 
    GROUP = 67, HAVING = 68, HIGH_PRIORITY = 69, IF = 70, IGNORE = 71, IN = 72, 
    INDEX = 73, INFILE = 74, INNER = 75, INOUT = 76, INSERT = 77, INTERVAL = 78, 
    INTO = 79, IS = 80, ITERATE = 81, JOIN = 82, KEY = 83, KEYS = 84, KILL = 85, 
    LEADING = 86, LEAVE = 87, LEFT = 88, LIKE = 89, LIMIT = 90, LINEAR = 91, 
    LINES = 92, LOAD = 93, LOCK = 94, LOOP = 95, LOW_PRIORITY = 96, MASTER_BIND = 97, 
    MASTER_SSL_VERIFY_SERVER_CERT = 98, MATCH = 99, MAXVALUE = 100, MODIFIES = 101, 
    NATURAL = 102, NOT = 103, NO_WRITE_TO_BINLOG = 104, NULL_LITERAL = 105, 
    NUMBER = 106, ON = 107, OPTIMIZE = 108, OPTION = 109, OPTIONALLY = 110, 
    OR = 111, ORDER = 112, OUT = 113, OUTER = 114, OUTFILE = 115, PARTITION = 116, 
    PRIMARY = 117, PROCEDURE = 118, PURGE = 119, RANGE = 120, READ = 121, 
    READS = 122, REFERENCES = 123, REGEXP = 124, RELEASE = 125, RENAME = 126, 
    REPEAT = 127, REPLACE = 128, REQUIRE = 129, RESIGNAL = 130, RESTRICT = 131, 
    RETURN = 132, REVOKE = 133, RIGHT = 134, RLIKE = 135, SCHEMA = 136, 
    SCHEMAS = 137, SELECT = 138, SET = 139, SEPARATOR = 140, SHOW = 141, 
    SIGNAL = 142, SPATIAL = 143, SQL = 144, SQLEXCEPTION = 145, SQLSTATE = 146, 
    SQLWARNING = 147, SQL_BIG_RESULT = 148, SQL_CALC_FOUND_ROWS = 149, SQL_SMALL_RESULT = 150, 
    SSL = 151, STACKED = 152, STARTING = 153, STRAIGHT_JOIN = 154, TABLE = 155, 
    TERMINATED = 156, THEN = 157, TO = 158, TRAILING = 159, TRIGGER = 160, 
    TRUE = 161, UNDO = 162, UNION = 163, UNIQUE = 164, UNLOCK = 165, UNSIGNED = 166, 
    UPDATE = 167, USAGE = 168, USE = 169, USING = 170, VALUES = 171, WHEN = 172, 
    WHERE = 173, WHILE = 174, WITH = 175, WRITE = 176, XOR = 177, ZEROFILL = 178, 
    TINYINT = 179, SMALLINT = 180, MEDIUMINT = 181, MIDDLEINT = 182, INT = 183, 
    INT1 = 184, INT2 = 185, INT3 = 186, INT4 = 187, INT8 = 188, INTEGER = 189, 
    BIGINT = 190, REAL = 191, DOUBLE = 192, PRECISION = 193, FLOAT = 194, 
    FLOAT4 = 195, FLOAT8 = 196, DECIMAL = 197, DEC = 198, NUMERIC = 199, 
    DATE = 200, TIME = 201, TIMESTAMP = 202, DATETIME = 203, YEAR = 204, 
    CHAR = 205, VARCHAR = 206, NVARCHAR = 207, NATIONAL = 208, BINARY = 209, 
    VARBINARY = 210, TINYBLOB = 211, BLOB = 212, MEDIUMBLOB = 213, LONG = 214, 
    LONGBLOB = 215, TINYTEXT = 216, TEXT = 217, MEDIUMTEXT = 218, LONGTEXT = 219, 
    ENUM = 220, VARYING = 221, SERIAL = 222, YEAR_MONTH = 223, DAY_HOUR = 224, 
    DAY_MINUTE = 225, DAY_SECOND = 226, HOUR_MINUTE = 227, HOUR_SECOND = 228, 
    MINUTE_SECOND = 229, SECOND_MICROSECOND = 230, MINUTE_MICROSECOND = 231, 
    HOUR_MICROSECOND = 232, DAY_MICROSECOND = 233, JSON_ARRAY = 234, JSON_OBJECT = 235, 
    JSON_QUOTE = 236, JSON_CONTAINS = 237, JSON_CONTAINS_PATH = 238, JSON_EXTRACT = 239, 
    JSON_KEYS = 240, JSON_OVERLAPS = 241, JSON_SEARCH = 242, JSON_VALUE = 243, 
    JSON_ARRAY_APPEND = 244, JSON_ARRAY_INSERT = 245, JSON_INSERT = 246, 
    JSON_MERGE = 247, JSON_MERGE_PATCH = 248, JSON_MERGE_PRESERVE = 249, 
    JSON_REMOVE = 250, JSON_REPLACE = 251, JSON_SET = 252, JSON_UNQUOTE = 253, 
    JSON_DEPTH = 254, JSON_LENGTH = 255, JSON_TYPE = 256, JSON_VALID = 257, 
    JSON_TABLE = 258, JSON_SCHEMA_VALID = 259, JSON_SCHEMA_VALIDATION_REPORT = 260, 
    JSON_PRETTY = 261, JSON_STORAGE_FREE = 262, JSON_STORAGE_SIZE = 263, 
    JSON_ARRAYAGG = 264, JSON_OBJECTAGG = 265, AVG = 266, BIT_AND = 267, 
    BIT_OR = 268, BIT_XOR = 269, COUNT = 270, GROUP_CONCAT = 271, MAX = 272, 
    MIN = 273, STD = 274, STDDEV = 275, STDDEV_POP = 276, STDDEV_SAMP = 277, 
    SUM = 278, VAR_POP = 279, VAR_SAMP = 280, VARIANCE = 281, CURRENT_DATE = 282, 
    CURRENT_TIME = 283, CURRENT_TIMESTAMP = 284, LOCALTIME = 285, CURDATE = 286, 
    CURTIME = 287, DATE_ADD = 288, DATE_SUB = 289, EXTRACT = 290, LOCALTIMESTAMP = 291, 
    NOW = 292, POSITION = 293, SUBSTR = 294, SUBSTRING = 295, SYSDATE = 296, 
    TRIM = 297, UTC_DATE = 298, UTC_TIME = 299, UTC_TIMESTAMP = 300, ACCOUNT = 301, 
    ACTION = 302, ADMIN = 303, NULL_ = 304, OPTIONAL = 305, AFTER = 306, 
    AGGREGATE = 307, ALGORITHM = 308, ANY = 309, AT = 310, AUTHORS = 311, 
    AUTOCOMMIT = 312, AUTOEXTEND_SIZE = 313, AUTO_INCREMENT = 314, AVG_ROW_LENGTH = 315, 
    BEGIN = 316, BINLOG = 317, BIT = 318, BLOCK = 319, BOOL = 320, BOOLEAN = 321, 
    BTREE = 322, CACHE = 323, CASCADED = 324, CHAIN = 325, CHANGED = 326, 
    CHANNEL = 327, CHECKSUM = 328, PAGE_CHECKSUM = 329, CIPHER = 330, CLASS_ORIGIN = 331, 
    CLIENT = 332, CLOSE = 333, COALESCE = 334, CODE = 335, COLUMNS = 336, 
    COLUMN_FORMAT = 337, COLUMN_NAME = 338, COMMENT = 339, COMMIT = 340, 
    COMPACT = 341, COMPLETION = 342, COMPRESSED = 343, COMPRESSION = 344, 
    CONCURRENT = 345, CONNECTION = 346, CONSISTENT = 347, CONSTRAINT_CATALOG = 348, 
    CONSTRAINT_SCHEMA = 349, CONSTRAINT_NAME = 350, CONTAINS = 351, CONTEXT = 352, 
    CONTRIBUTORS = 353, COPY = 354, CPU = 355, CURSOR_NAME = 356, DATA = 357, 
    DATAFILE = 358, DEALLOCATE = 359, DEFAULT_AUTH = 360, DEFINER = 361, 
    DELAY_KEY_WRITE = 362, DES_KEY_FILE = 363, DIRECTORY = 364, DISABLE = 365, 
    DISCARD = 366, DISK = 367, DO = 368, DUMPFILE = 369, DUPLICATE = 370, 
    DYNAMIC = 371, ENABLE = 372, ENCRYPTION = 373, END = 374, ENDS = 375, 
    ENGINE = 376, ENGINES = 377, ERROR = 378, ERRORS = 379, ESCAPE = 380, 
    EVEN = 381, EVENT = 382, EVENTS = 383, EVERY = 384, EXCHANGE = 385, 
    EXCLUSIVE = 386, EXPIRE = 387, EXPORT = 388, EXTENDED = 389, EXTENT_SIZE = 390, 
    FAST = 391, FAULTS = 392, FIELDS = 393, FILE_BLOCK_SIZE = 394, FILTER = 395, 
    FIRST = 396, FIXED = 397, FLUSH = 398, FOLLOWS = 399, FOUND = 400, FULL = 401, 
    FUNCTION = 402, GENERAL = 403, GLOBAL = 404, GRANTS = 405, GROUP_REPLICATION = 406, 
    HANDLER = 407, HASH = 408, HELP = 409, HOST = 410, HOSTS = 411, IDENTIFIED = 412, 
    IGNORE_SERVER_IDS = 413, IMPORT = 414, INDEXES = 415, INITIAL_SIZE = 416, 
    INPLACE = 417, INSERT_METHOD = 418, INSTALL = 419, INSTANCE = 420, INVISIBLE = 421, 
    INVOKER = 422, IO = 423, IO_THREAD = 424, IPC = 425, ISOLATION = 426, 
    ISSUER = 427, JSON = 428, KEY_BLOCK_SIZE = 429, LANGUAGE = 430, LAST = 431, 
    LEAVES = 432, LESS = 433, LEVEL = 434, LIST = 435, LOCAL = 436, LOGFILE = 437, 
    LOGS = 438, MASTER = 439, MASTER_AUTO_POSITION = 440, MASTER_CONNECT_RETRY = 441, 
    MASTER_DELAY = 442, MASTER_HEARTBEAT_PERIOD = 443, MASTER_HOST = 444, 
    MASTER_LOG_FILE = 445, MASTER_LOG_POS = 446, MASTER_PASSWORD = 447, 
    MASTER_PORT = 448, MASTER_RETRY_COUNT = 449, MASTER_SSL = 450, MASTER_SSL_CA = 451, 
    MASTER_SSL_CAPATH = 452, MASTER_SSL_CERT = 453, MASTER_SSL_CIPHER = 454, 
    MASTER_SSL_CRL = 455, MASTER_SSL_CRLPATH = 456, MASTER_SSL_KEY = 457, 
    MASTER_TLS_VERSION = 458, MASTER_USER = 459, MAX_CONNECTIONS_PER_HOUR = 460, 
    MAX_QUERIES_PER_HOUR = 461, MAX_ROWS = 462, MAX_SIZE = 463, MAX_UPDATES_PER_HOUR = 464, 
    MAX_USER_CONNECTIONS = 465, MEDIUM = 466, MEMBER = 467, MERGE = 468, 
    MESSAGE_TEXT = 469, MID = 470, MIGRATE = 471, MIN_ROWS = 472, MODE = 473, 
    MODIFY = 474, MUTEX = 475, MYSQL = 476, MYSQL_ERRNO = 477, NAME = 478, 
    NAMES = 479, NCHAR = 480, NEVER = 481, NEXT = 482, NO = 483, NODEGROUP = 484, 
    NONE = 485, OFFLINE = 486, OFFSET = 487, OF = 488, OJ = 489, OLD_PASSWORD = 490, 
    ONE = 491, ONLINE = 492, ONLY = 493, OPEN = 494, OPTIMIZER_COSTS = 495, 
    OPTIONS = 496, OWNER = 497, PACK_KEYS = 498, PAGE = 499, PARSER = 500, 
    PARTIAL = 501, PARTITIONING = 502, PARTITIONS = 503, PASSWORD = 504, 
    PHASE = 505, PLUGIN = 506, PLUGIN_DIR = 507, PLUGINS = 508, PORT = 509, 
    PRECEDES = 510, PREPARE = 511, PRESERVE = 512, PREV = 513, PROCESSLIST = 514, 
    PROFILE = 515, PROFILES = 516, PROXY = 517, QUERY = 518, QUICK = 519, 
    REBUILD = 520, RECOVER = 521, REDO_BUFFER_SIZE = 522, REDUNDANT = 523, 
    RELAY = 524, RELAY_LOG_FILE = 525, RELAY_LOG_POS = 526, RELAYLOG = 527, 
    REMOVE = 528, REORGANIZE = 529, REPAIR = 530, REPLICATE_DO_DB = 531, 
    REPLICATE_DO_TABLE = 532, REPLICATE_IGNORE_DB = 533, REPLICATE_IGNORE_TABLE = 534, 
    REPLICATE_REWRITE_DB = 535, REPLICATE_WILD_DO_TABLE = 536, REPLICATE_WILD_IGNORE_TABLE = 537, 
    REPLICATION = 538, RESET = 539, RESUME = 540, RETURNED_SQLSTATE = 541, 
    RETURNING = 542, RETURNS = 543, ROLE = 544, ROLLBACK = 545, ROLLUP = 546, 
    ROTATE = 547, ROW = 548, ROWS = 549, ROW_FORMAT = 550, SAVEPOINT = 551, 
    SCHEDULE = 552, SECURITY = 553, SERVER = 554, SESSION = 555, SHARE = 556, 
    SHARED = 557, SIGNED = 558, SIMPLE = 559, SLAVE = 560, SLOW = 561, SNAPSHOT = 562, 
    SOCKET = 563, SOME = 564, SONAME = 565, SOUNDS = 566, SOURCE = 567, 
    SQL_AFTER_GTIDS = 568, SQL_AFTER_MTS_GAPS = 569, SQL_BEFORE_GTIDS = 570, 
    SQL_BUFFER_RESULT = 571, SQL_CACHE = 572, SQL_NO_CACHE = 573, SQL_THREAD = 574, 
    START = 575, STARTS = 576, STATS_AUTO_RECALC = 577, STATS_PERSISTENT = 578, 
    STATS_SAMPLE_PAGES = 579, STATUS = 580, STOP = 581, STORAGE = 582, STORED = 583, 
    STRING = 584, SUBCLASS_ORIGIN = 585, SUBJECT = 586, SUBPARTITION = 587, 
    SUBPARTITIONS = 588, SUSPEND = 589, SWAPS = 590, SWITCHES = 591, TABLE_NAME = 592, 
    TABLESPACE = 593, TEMPORARY = 594, TEMPTABLE = 595, THAN = 596, TRADITIONAL = 597, 
    TRANSACTION = 598, TRANSACTIONAL = 599, TRIGGERS = 600, TRUNCATE = 601, 
    UNDEFINED = 602, UNDOFILE = 603, UNDO_BUFFER_SIZE = 604, UNINSTALL = 605, 
    UNKNOWN = 606, UNTIL = 607, UPGRADE = 608, USER = 609, USE_FRM = 610, 
    USER_RESOURCES = 611, VALIDATION = 612, VALUE = 613, VARIABLES = 614, 
    VIEW = 615, VIRTUAL = 616, VISIBLE = 617, WAIT = 618, WARNINGS = 619, 
    WITHOUT = 620, WORK = 621, WRAPPER = 622, X509 = 623, XA = 624, XML = 625, 
    EUR = 626, USA = 627, JIS = 628, ISO = 629, INTERNAL = 630, QUARTER = 631, 
    MONTH = 632, DAY = 633, HOUR = 634, MINUTE = 635, WEEK = 636, SECOND = 637, 
    MICROSECOND = 638, TABLES = 639, ROUTINE = 640, EXECUTE = 641, FILE = 642, 
    PROCESS = 643, RELOAD = 644, SHUTDOWN = 645, SUPER = 646, PRIVILEGES = 647, 
    APPLICATION_PASSWORD_ADMIN = 648, AUDIT_ADMIN = 649, BACKUP_ADMIN = 650, 
    BINLOG_ADMIN = 651, BINLOG_ENCRYPTION_ADMIN = 652, CLONE_ADMIN = 653, 
    CONNECTION_ADMIN = 654, ENCRYPTION_KEY_ADMIN = 655, FIREWALL_ADMIN = 656, 
    FIREWALL_USER = 657, FLUSH_OPTIMIZER_COSTS = 658, FLUSH_STATUS = 659, 
    FLUSH_TABLES = 660, FLUSH_USER_RESOURCES = 661, GROUP_REPLICATION_ADMIN = 662, 
    INNODB_REDO_LOG_ARCHIVE = 663, INNODB_REDO_LOG_ENABLE = 664, NDB_STORED_USER = 665, 
    PERSIST_RO_VARIABLES_ADMIN = 666, REPLICATION_APPLIER = 667, REPLICATION_SLAVE_ADMIN = 668, 
    RESOURCE_GROUP_ADMIN = 669, RESOURCE_GROUP_USER = 670, ROLE_ADMIN = 671, 
    SERVICE_CONNECTION_ADMIN = 672, SESSION_VARIABLES_ADMIN = 673, SET_USER_ID = 674, 
    SHOW_ROUTINE = 675, SYSTEM_VARIABLES_ADMIN = 676, TABLE_ENCRYPTION_ADMIN = 677, 
    VERSION_TOKEN_ADMIN = 678, XA_RECOVER_ADMIN = 679, ARMSCII8 = 680, ASCII = 681, 
    BIG5 = 682, CP1250 = 683, CP1251 = 684, CP1256 = 685, CP1257 = 686, 
    CP850 = 687, CP852 = 688, CP866 = 689, CP932 = 690, DEC8 = 691, EUCJPMS = 692, 
    EUCKR = 693, GB2312 = 694, GBK = 695, GEOSTD8 = 696, GREEK = 697, HEBREW = 698, 
    HP8 = 699, KEYBCS2 = 700, KOI8R = 701, KOI8U = 702, LATIN1 = 703, LATIN2 = 704, 
    LATIN5 = 705, LATIN7 = 706, MACCE = 707, MACROMAN = 708, SJIS = 709, 
    SWE7 = 710, TIS620 = 711, UCS2 = 712, UJIS = 713, UTF16 = 714, UTF16LE = 715, 
    UTF32 = 716, UTF8 = 717, UTF8MB3 = 718, UTF8MB4 = 719, ARCHIVE = 720, 
    BLACKHOLE = 721, CSV = 722, FEDERATED = 723, INNODB = 724, MEMORY = 725, 
    MRG_MYISAM = 726, MYISAM = 727, NDB = 728, NDBCLUSTER = 729, PERFORMANCE_SCHEMA = 730, 
    TOKUDB = 731, REPEATABLE = 732, COMMITTED = 733, UNCOMMITTED = 734, 
    SERIALIZABLE = 735, GEOMETRYCOLLECTION = 736, GEOMCOLLECTION = 737, 
    GEOMETRY = 738, LINESTRING = 739, MULTILINESTRING = 740, MULTIPOINT = 741, 
    MULTIPOLYGON = 742, POINT = 743, POLYGON = 744, ABS = 745, ACOS = 746, 
    ADDDATE = 747, ADDTIME = 748, AES_DECRYPT = 749, AES_ENCRYPT = 750, 
    AREA = 751, ASBINARY = 752, ASIN = 753, ASTEXT = 754, ASWKB = 755, ASWKT = 756, 
    ASYMMETRIC_DECRYPT = 757, ASYMMETRIC_DERIVE = 758, ASYMMETRIC_ENCRYPT = 759, 
    ASYMMETRIC_SIGN = 760, ASYMMETRIC_VERIFY = 761, ATAN = 762, ATAN2 = 763, 
    BENCHMARK = 764, BIN = 765, BIT_COUNT = 766, BIT_LENGTH = 767, BUFFER = 768, 
    CATALOG_NAME = 769, CEIL = 770, CEILING = 771, CENTROID = 772, CHARACTER_LENGTH = 773, 
    CHARSET = 774, CHAR_LENGTH = 775, COERCIBILITY = 776, COLLATION = 777, 
    COMPRESS = 778, CONCAT = 779, CONCAT_WS = 780, CONNECTION_ID = 781, 
    CONV = 782, CONVERT_TZ = 783, COS = 784, COT = 785, CRC32 = 786, CREATE_ASYMMETRIC_PRIV_KEY = 787, 
    CREATE_ASYMMETRIC_PUB_KEY = 788, CREATE_DH_PARAMETERS = 789, CREATE_DIGEST = 790, 
    CROSSES = 791, DATEDIFF = 792, DATE_FORMAT = 793, DAYNAME = 794, DAYOFMONTH = 795, 
    DAYOFWEEK = 796, DAYOFYEAR = 797, DECODE = 798, DEGREES = 799, DES_DECRYPT = 800, 
    DES_ENCRYPT = 801, DIMENSION = 802, DISJOINT = 803, ELT = 804, ENCODE = 805, 
    ENCRYPT = 806, ENDPOINT = 807, ENVELOPE = 808, EQUALS = 809, EXP = 810, 
    EXPORT_SET = 811, EXTERIORRING = 812, EXTRACTVALUE = 813, FIELD = 814, 
    FIND_IN_SET = 815, FLOOR = 816, FORMAT = 817, FOUND_ROWS = 818, FROM_BASE64 = 819, 
    FROM_DAYS = 820, FROM_UNIXTIME = 821, GEOMCOLLFROMTEXT = 822, GEOMCOLLFROMWKB = 823, 
    GEOMETRYCOLLECTIONFROMTEXT = 824, GEOMETRYCOLLECTIONFROMWKB = 825, GEOMETRYFROMTEXT = 826, 
    GEOMETRYFROMWKB = 827, GEOMETRYN = 828, GEOMETRYTYPE = 829, GEOMFROMTEXT = 830, 
    GEOMFROMWKB = 831, GET_FORMAT = 832, GET_LOCK = 833, GLENGTH = 834, 
    GREATEST = 835, GTID_SUBSET = 836, GTID_SUBTRACT = 837, HEX = 838, IFNULL = 839, 
    INET6_ATON = 840, INET6_NTOA = 841, INET_ATON = 842, INET_NTOA = 843, 
    INSTR = 844, INTERIORRINGN = 845, INTERSECTS = 846, ISCLOSED = 847, 
    ISEMPTY = 848, ISNULL = 849, ISSIMPLE = 850, IS_FREE_LOCK = 851, IS_IPV4 = 852, 
    IS_IPV4_COMPAT = 853, IS_IPV4_MAPPED = 854, IS_IPV6 = 855, IS_USED_LOCK = 856, 
    LAST_INSERT_ID = 857, LCASE = 858, LEAST = 859, LENGTH = 860, LINEFROMTEXT = 861, 
    LINEFROMWKB = 862, LINESTRINGFROMTEXT = 863, LINESTRINGFROMWKB = 864, 
    LN = 865, LOAD_FILE = 866, LOCATE = 867, LOG = 868, LOG10 = 869, LOG2 = 870, 
    LOWER = 871, LPAD = 872, LTRIM = 873, MAKEDATE = 874, MAKETIME = 875, 
    MAKE_SET = 876, MASTER_POS_WAIT = 877, MBRCONTAINS = 878, MBRDISJOINT = 879, 
    MBREQUAL = 880, MBRINTERSECTS = 881, MBROVERLAPS = 882, MBRTOUCHES = 883, 
    MBRWITHIN = 884, MD5 = 885, MLINEFROMTEXT = 886, MLINEFROMWKB = 887, 
    MONTHNAME = 888, MPOINTFROMTEXT = 889, MPOINTFROMWKB = 890, MPOLYFROMTEXT = 891, 
    MPOLYFROMWKB = 892, MULTILINESTRINGFROMTEXT = 893, MULTILINESTRINGFROMWKB = 894, 
    MULTIPOINTFROMTEXT = 895, MULTIPOINTFROMWKB = 896, MULTIPOLYGONFROMTEXT = 897, 
    MULTIPOLYGONFROMWKB = 898, NAME_CONST = 899, NULLIF = 900, NUMGEOMETRIES = 901, 
    NUMINTERIORRINGS = 902, NUMPOINTS = 903, OCT = 904, OCTET_LENGTH = 905, 
    ORD = 906, OVERLAPS = 907, PERIOD_ADD = 908, PERIOD_DIFF = 909, PI = 910, 
    POINTFROMTEXT = 911, POINTFROMWKB = 912, POINTN = 913, POLYFROMTEXT = 914, 
    POLYFROMWKB = 915, POLYGONFROMTEXT = 916, POLYGONFROMWKB = 917, POW = 918, 
    POWER = 919, QUOTE = 920, RADIANS = 921, RAND = 922, RANDOM_BYTES = 923, 
    RELEASE_LOCK = 924, REVERSE = 925, ROUND = 926, ROW_COUNT = 927, RPAD = 928, 
    RTRIM = 929, SEC_TO_TIME = 930, SESSION_USER = 931, SHA = 932, SHA1 = 933, 
    SHA2 = 934, SCHEMA_NAME = 935, SIGN = 936, SIN = 937, SLEEP = 938, SOUNDEX = 939, 
    SQL_THREAD_WAIT_AFTER_GTIDS = 940, SQRT = 941, SRID = 942, STARTPOINT = 943, 
    STRCMP = 944, STR_TO_DATE = 945, ST_AREA = 946, ST_ASBINARY = 947, ST_ASTEXT = 948, 
    ST_ASWKB = 949, ST_ASWKT = 950, ST_BUFFER = 951, ST_CENTROID = 952, 
    ST_CONTAINS = 953, ST_CROSSES = 954, ST_DIFFERENCE = 955, ST_DIMENSION = 956, 
    ST_DISJOINT = 957, ST_DISTANCE = 958, ST_ENDPOINT = 959, ST_ENVELOPE = 960, 
    ST_EQUALS = 961, ST_EXTERIORRING = 962, ST_GEOMCOLLFROMTEXT = 963, ST_GEOMCOLLFROMTXT = 964, 
    ST_GEOMCOLLFROMWKB = 965, ST_GEOMETRYCOLLECTIONFROMTEXT = 966, ST_GEOMETRYCOLLECTIONFROMWKB = 967, 
    ST_GEOMETRYFROMTEXT = 968, ST_GEOMETRYFROMWKB = 969, ST_GEOMETRYN = 970, 
    ST_GEOMETRYTYPE = 971, ST_GEOMFROMTEXT = 972, ST_GEOMFROMWKB = 973, 
    ST_INTERIORRINGN = 974, ST_INTERSECTION = 975, ST_INTERSECTS = 976, 
    ST_ISCLOSED = 977, ST_ISEMPTY = 978, ST_ISSIMPLE = 979, ST_LINEFROMTEXT = 980, 
    ST_LINEFROMWKB = 981, ST_LINESTRINGFROMTEXT = 982, ST_LINESTRINGFROMWKB = 983, 
    ST_NUMGEOMETRIES = 984, ST_NUMINTERIORRING = 985, ST_NUMINTERIORRINGS = 986, 
    ST_NUMPOINTS = 987, ST_OVERLAPS = 988, ST_POINTFROMTEXT = 989, ST_POINTFROMWKB = 990, 
    ST_POINTN = 991, ST_POLYFROMTEXT = 992, ST_POLYFROMWKB = 993, ST_POLYGONFROMTEXT = 994, 
    ST_POLYGONFROMWKB = 995, ST_SRID = 996, ST_STARTPOINT = 997, ST_SYMDIFFERENCE = 998, 
    ST_TOUCHES = 999, ST_UNION = 1000, ST_WITHIN = 1001, ST_X = 1002, ST_Y = 1003, 
    SUBDATE = 1004, SUBSTRING_INDEX = 1005, SUBTIME = 1006, SYSTEM_USER = 1007, 
    TAN = 1008, TIMEDIFF = 1009, TIMESTAMPADD = 1010, TIMESTAMPDIFF = 1011, 
    TIME_FORMAT = 1012, TIME_TO_SEC = 1013, TOUCHES = 1014, TO_BASE64 = 1015, 
    TO_DAYS = 1016, TO_SECONDS = 1017, UCASE = 1018, UNCOMPRESS = 1019, 
    UNCOMPRESSED_LENGTH = 1020, UNHEX = 1021, UNIX_TIMESTAMP = 1022, UPDATEXML = 1023, 
    UPPER = 1024, UUID = 1025, UUID_SHORT = 1026, VALIDATE_PASSWORD_STRENGTH = 1027, 
    VERSION = 1028, WAIT_UNTIL_SQL_THREAD_AFTER_GTIDS = 1029, WEEKDAY = 1030, 
    WEEKOFYEAR = 1031, WEIGHT_STRING = 1032, WITHIN = 1033, YEARWEEK = 1034, 
    Y_FUNCTION = 1035, X_FUNCTION = 1036, VAR_ASSIGN = 1037, PLUS_ASSIGN = 1038, 
    MINUS_ASSIGN = 1039, MULT_ASSIGN = 1040, DIV_ASSIGN = 1041, MOD_ASSIGN = 1042, 
    AND_ASSIGN = 1043, XOR_ASSIGN = 1044, OR_ASSIGN = 1045, STAR = 1046, 
    DIVIDE = 1047, MODULE = 1048, PLUS = 1049, MINUSMINUS = 1050, MINUS = 1051, 
    DIV = 1052, MOD = 1053, EQUAL_SYMBOL = 1054, GREATER_SYMBOL = 1055, 
    LESS_SYMBOL = 1056, EXCLAMATION_SYMBOL = 1057, BIT_NOT_OP = 1058, BIT_OR_OP = 1059, 
    BIT_AND_OP = 1060, BIT_XOR_OP = 1061, DOT = 1062, LR_BRACKET = 1063, 
    RR_BRACKET = 1064, COMMA = 1065, SEMI = 1066, AT_SIGN = 1067, ZERO_DECIMAL = 1068, 
    ONE_DECIMAL = 1069, TWO_DECIMAL = 1070, SINGLE_QUOTE_SYMB = 1071, DOUBLE_QUOTE_SYMB = 1072, 
    REVERSE_QUOTE_SYMB = 1073, COLON_SYMB = 1074, CHARSET_REVERSE_QOUTE_STRING = 1075, 
    FILESIZE_LITERAL = 1076, START_NATIONAL_STRING_LITERAL = 1077, STRING_LITERAL = 1078, 
    DECIMAL_LITERAL = 1079, HEXADECIMAL_LITERAL = 1080, REAL_LITERAL = 1081, 
    NULL_SPEC_LITERAL = 1082, BIT_STRING = 1083, STRING_CHARSET_NAME = 1084, 
    DOT_ID = 1085, ID = 1086, REVERSE_QUOTE_ID = 1087, STRING_USER_NAME = 1088, 
    IP_ADDRESS = 1089, LOCAL_ID = 1090, GLOBAL_ID = 1091, ERROR_RECONGNIGION = 1092
  };

  enum {
    RuleRoot = 0, RuleSqlStatements = 1, RuleSqlStatement = 2, RuleEmptyStatement = 3, 
    RuleDdlStatement = 4, RuleDmlStatement = 5, RuleTransactionStatement = 6, 
    RuleReplicationStatement = 7, RulePreparedStatement = 8, RuleCompoundStatement = 9, 
    RuleAdministrationStatement = 10, RuleUtilityStatement = 11, RuleCreateDatabase = 12, 
    RuleCreateEvent = 13, RuleCreateIndex = 14, RuleCreateLogfileGroup = 15, 
    RuleCreateProcedure = 16, RuleCreateFunction = 17, RuleCreateServer = 18, 
    RuleCreateTable = 19, RuleCreateTablespaceInnodb = 20, RuleCreateTablespaceNdb = 21, 
    RuleCreateTrigger = 22, RuleCreateView = 23, RuleCreateDatabaseOption = 24, 
    RuleOwnerStatement = 25, RuleScheduleExpression = 26, RuleTimestampValue = 27, 
    RuleIntervalExpr = 28, RuleIntervalType = 29, RuleEnableType = 30, RuleIndexType = 31, 
    RuleIndexOption = 32, RuleProcedureParameter = 33, RuleFunctionParameter = 34, 
    RuleRoutineOption = 35, RuleServerOption = 36, RuleCreateDefinitions = 37, 
    RuleCreateDefinition = 38, RuleColumnDefinition = 39, RuleColumnConstraint = 40, 
    RuleTableConstraint = 41, RuleReferenceDefinition = 42, RuleReferenceAction = 43, 
    RuleReferenceControlType = 44, RuleIndexColumnDefinition = 45, RuleTableOption = 46, 
    RuleTablespaceStorage = 47, RulePartitionDefinitions = 48, RulePartitionFunctionDefinition = 49, 
    RuleSubpartitionFunctionDefinition = 50, RulePartitionDefinition = 51, 
    RulePartitionDefinerAtom = 52, RulePartitionDefinerVector = 53, RuleSubpartitionDefinition = 54, 
    RulePartitionOption = 55, RuleAlterDatabase = 56, RuleAlterEvent = 57, 
    RuleAlterFunction = 58, RuleAlterInstance = 59, RuleAlterLogfileGroup = 60, 
    RuleAlterProcedure = 61, RuleAlterServer = 62, RuleAlterTable = 63, 
    RuleAlterTablespace = 64, RuleAlterView = 65, RuleAlterSpecification = 66, 
    RuleDropDatabase = 67, RuleDropEvent = 68, RuleDropIndex = 69, RuleDropLogfileGroup = 70, 
    RuleDropProcedure = 71, RuleDropFunction = 72, RuleDropServer = 73, 
    RuleDropTable = 74, RuleDropTablespace = 75, RuleDropTrigger = 76, RuleDropView = 77, 
    RuleRenameTable = 78, RuleRenameTableClause = 79, RuleTruncateTable = 80, 
    RuleCallStatement = 81, RuleDeleteStatement = 82, RuleDoStatement = 83, 
    RuleHandlerStatement = 84, RuleInsertStatement = 85, RuleLoadDataStatement = 86, 
    RuleLoadXmlStatement = 87, RuleReplaceStatement = 88, RuleSelectStatement = 89, 
    RuleUpdateStatement = 90, RuleInsertStatementValue = 91, RuleUpdatedElement = 92, 
    RuleAssignmentField = 93, RuleLockClause = 94, RuleSingleDeleteStatement = 95, 
    RuleMultipleDeleteStatement = 96, RuleHandlerOpenStatement = 97, RuleHandlerReadIndexStatement = 98, 
    RuleHandlerReadStatement = 99, RuleHandlerCloseStatement = 100, RuleSingleUpdateStatement = 101, 
    RuleMultipleUpdateStatement = 102, RuleOrderByClause = 103, RuleOrderByExpression = 104, 
    RuleTableSources = 105, RuleTableSource = 106, RuleTableSourceItem = 107, 
    RuleIndexHint = 108, RuleIndexHintType = 109, RuleJoinPart = 110, RuleQueryExpression = 111, 
    RuleQueryExpressionNointo = 112, RuleQuerySpecification = 113, RuleQuerySpecificationNointo = 114, 
    RuleUnionParenthesis = 115, RuleUnionStatement = 116, RuleSelectSpec = 117, 
    RuleSelectElements = 118, RuleSelectElement = 119, RuleSelectIntoExpression = 120, 
    RuleSelectFieldsInto = 121, RuleSelectLinesInto = 122, RuleFromClause = 123, 
    RuleGroupByClause = 124, RuleHavingClause = 125, RuleGroupByItem = 126, 
    RuleLimitClause = 127, RuleLimitClauseAtom = 128, RuleStartTransaction = 129, 
    RuleBeginWork = 130, RuleCommitWork = 131, RuleRollbackWork = 132, RuleSavepointStatement = 133, 
    RuleRollbackStatement = 134, RuleReleaseStatement = 135, RuleLockTables = 136, 
    RuleUnlockTables = 137, RuleSetAutocommitStatement = 138, RuleSetTransactionStatement = 139, 
    RuleTransactionMode = 140, RuleLockTableElement = 141, RuleLockAction = 142, 
    RuleTransactionOption = 143, RuleTransactionLevel = 144, RuleChangeMaster = 145, 
    RuleChangeReplicationFilter = 146, RulePurgeBinaryLogs = 147, RuleResetMaster = 148, 
    RuleResetSlave = 149, RuleStartSlave = 150, RuleStopSlave = 151, RuleStartGroupReplication = 152, 
    RuleStopGroupReplication = 153, RuleMasterOption = 154, RuleStringMasterOption = 155, 
    RuleDecimalMasterOption = 156, RuleBoolMasterOption = 157, RuleChannelOption = 158, 
    RuleReplicationFilter = 159, RuleTablePair = 160, RuleThreadType = 161, 
    RuleUntilOption = 162, RuleConnectionOption = 163, RuleGtuidSet = 164, 
    RuleXaStartTransaction = 165, RuleXaEndTransaction = 166, RuleXaPrepareStatement = 167, 
    RuleXaCommitWork = 168, RuleXaRollbackWork = 169, RuleXaRecoverWork = 170, 
    RulePrepareStatement = 171, RuleExecuteStatement = 172, RuleDeallocatePrepare = 173, 
    RuleRoutineBody = 174, RuleBlockStatement = 175, RuleCaseStatement = 176, 
    RuleIfStatement = 177, RuleIterateStatement = 178, RuleLeaveStatement = 179, 
    RuleLoopStatement = 180, RuleRepeatStatement = 181, RuleReturnStatement = 182, 
    RuleWhileStatement = 183, RuleCursorStatement = 184, RuleDeclareVariable = 185, 
    RuleDeclareCondition = 186, RuleDeclareCursor = 187, RuleDeclareHandler = 188, 
    RuleHandlerConditionValue = 189, RuleProcedureSqlStatement = 190, RuleCaseAlternative = 191, 
    RuleElifAlternative = 192, RuleAlterUser = 193, RuleCreateUser = 194, 
    RuleDropUser = 195, RuleGrantStatement = 196, RuleGrantProxy = 197, 
    RuleRenameUser = 198, RuleRevokeStatement = 199, RuleRevokeProxy = 200, 
    RuleSetPasswordStatement = 201, RuleUserSpecification = 202, RuleUserAuthOption = 203, 
    RuleTlsOption = 204, RuleUserResourceOption = 205, RuleUserPasswordOption = 206, 
    RuleUserLockOption = 207, RulePrivelegeClause = 208, RulePrivilege = 209, 
    RulePrivilegeLevel = 210, RuleRenameUserClause = 211, RuleAnalyzeTable = 212, 
    RuleCheckTable = 213, RuleChecksumTable = 214, RuleOptimizeTable = 215, 
    RuleRepairTable = 216, RuleCheckTableOption = 217, RuleCreateUdfunction = 218, 
    RuleInstallPlugin = 219, RuleUninstallPlugin = 220, RuleSetStatement = 221, 
    RuleShowStatement = 222, RuleVariableClause = 223, RuleShowCommonEntity = 224, 
    RuleShowFilter = 225, RuleShowGlobalInfoClause = 226, RuleShowSchemaEntity = 227, 
    RuleShowProfileType = 228, RuleBinlogStatement = 229, RuleCacheIndexStatement = 230, 
    RuleFlushStatement = 231, RuleKillStatement = 232, RuleLoadIndexIntoCache = 233, 
    RuleResetStatement = 234, RuleShutdownStatement = 235, RuleTableIndexes = 236, 
    RuleFlushOption = 237, RuleFlushTableOption = 238, RuleLoadedTableIndexes = 239, 
    RuleSimpleDescribeStatement = 240, RuleFullDescribeStatement = 241, 
    RuleHelpStatement = 242, RuleUseStatement = 243, RuleSignalStatement = 244, 
    RuleResignalStatement = 245, RuleSignalConditionInformation = 246, RuleDiagnosticsStatement = 247, 
    RuleDiagnosticsConditionInformationName = 248, RuleDescribeObjectClause = 249, 
    RuleFullId = 250, RuleTableName = 251, RuleFullColumnName = 252, RuleIndexColumnName = 253, 
    RuleUserName = 254, RuleMysqlVariable = 255, RuleCharsetName = 256, 
    RuleCollationName = 257, RuleEngineName = 258, RuleUuidSet = 259, RuleXid = 260, 
    RuleXuidStringId = 261, RuleAuthPlugin = 262, RuleUid = 263, RuleSimpleId = 264, 
    RuleDottedId = 265, RuleDecimalLiteral = 266, RuleFileSizeLiteral = 267, 
    RuleStringLiteral = 268, RuleBooleanLiteral = 269, RuleHexadecimalLiteral = 270, 
    RuleNullNotnull = 271, RuleConstant = 272, RuleDataType = 273, RuleCollectionOptions = 274, 
    RuleConvertedDataType = 275, RuleLengthOneDimension = 276, RuleLengthTwoDimension = 277, 
    RuleLengthTwoOptionalDimension = 278, RuleUidList = 279, RuleTables = 280, 
    RuleIndexColumnNames = 281, RuleExpressions = 282, RuleExpressionsWithDefaults = 283, 
    RuleConstants = 284, RuleSimpleStrings = 285, RuleUserVariables = 286, 
    RuleDefaultValue = 287, RuleCurrentTimestamp = 288, RuleExpressionOrDefault = 289, 
    RuleIfExists = 290, RuleIfNotExists = 291, RuleFunctionCall = 292, RuleSpecificFunction = 293, 
    RuleCaseFuncAlternative = 294, RuleLevelsInWeightString = 295, RuleLevelInWeightListElement = 296, 
    RuleAggregateWindowedFunction = 297, RuleScalarFunctionName = 298, RulePasswordFunctionClause = 299, 
    RuleFunctionArgs = 300, RuleFunctionArg = 301, RuleExpression = 302, 
    RulePredicate = 303, RuleExpressionAtom = 304, RuleUnaryOperator = 305, 
    RuleComparisonOperator = 306, RuleLogicalOperator = 307, RuleBitOperator = 308, 
    RuleMathOperator = 309, RuleJsonOperator = 310, RuleCharsetNameBase = 311, 
    RuleTransactionLevelBase = 312, RulePrivilegesBase = 313, RuleIntervalTypeBase = 314, 
    RuleDataTypeBase = 315, RuleKeywordsCanBeId = 316, RuleFunctionNameBase = 317
  };

  explicit MySqlParser(antlr4::TokenStream *input);

  MySqlParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MySqlParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class RootContext;
  class SqlStatementsContext;
  class SqlStatementContext;
  class EmptyStatementContext;
  class DdlStatementContext;
  class DmlStatementContext;
  class TransactionStatementContext;
  class ReplicationStatementContext;
  class PreparedStatementContext;
  class CompoundStatementContext;
  class AdministrationStatementContext;
  class UtilityStatementContext;
  class CreateDatabaseContext;
  class CreateEventContext;
  class CreateIndexContext;
  class CreateLogfileGroupContext;
  class CreateProcedureContext;
  class CreateFunctionContext;
  class CreateServerContext;
  class CreateTableContext;
  class CreateTablespaceInnodbContext;
  class CreateTablespaceNdbContext;
  class CreateTriggerContext;
  class CreateViewContext;
  class CreateDatabaseOptionContext;
  class OwnerStatementContext;
  class ScheduleExpressionContext;
  class TimestampValueContext;
  class IntervalExprContext;
  class IntervalTypeContext;
  class EnableTypeContext;
  class IndexTypeContext;
  class IndexOptionContext;
  class ProcedureParameterContext;
  class FunctionParameterContext;
  class RoutineOptionContext;
  class ServerOptionContext;
  class CreateDefinitionsContext;
  class CreateDefinitionContext;
  class ColumnDefinitionContext;
  class ColumnConstraintContext;
  class TableConstraintContext;
  class ReferenceDefinitionContext;
  class ReferenceActionContext;
  class ReferenceControlTypeContext;
  class IndexColumnDefinitionContext;
  class TableOptionContext;
  class TablespaceStorageContext;
  class PartitionDefinitionsContext;
  class PartitionFunctionDefinitionContext;
  class SubpartitionFunctionDefinitionContext;
  class PartitionDefinitionContext;
  class PartitionDefinerAtomContext;
  class PartitionDefinerVectorContext;
  class SubpartitionDefinitionContext;
  class PartitionOptionContext;
  class AlterDatabaseContext;
  class AlterEventContext;
  class AlterFunctionContext;
  class AlterInstanceContext;
  class AlterLogfileGroupContext;
  class AlterProcedureContext;
  class AlterServerContext;
  class AlterTableContext;
  class AlterTablespaceContext;
  class AlterViewContext;
  class AlterSpecificationContext;
  class DropDatabaseContext;
  class DropEventContext;
  class DropIndexContext;
  class DropLogfileGroupContext;
  class DropProcedureContext;
  class DropFunctionContext;
  class DropServerContext;
  class DropTableContext;
  class DropTablespaceContext;
  class DropTriggerContext;
  class DropViewContext;
  class RenameTableContext;
  class RenameTableClauseContext;
  class TruncateTableContext;
  class CallStatementContext;
  class DeleteStatementContext;
  class DoStatementContext;
  class HandlerStatementContext;
  class InsertStatementContext;
  class LoadDataStatementContext;
  class LoadXmlStatementContext;
  class ReplaceStatementContext;
  class SelectStatementContext;
  class UpdateStatementContext;
  class InsertStatementValueContext;
  class UpdatedElementContext;
  class AssignmentFieldContext;
  class LockClauseContext;
  class SingleDeleteStatementContext;
  class MultipleDeleteStatementContext;
  class HandlerOpenStatementContext;
  class HandlerReadIndexStatementContext;
  class HandlerReadStatementContext;
  class HandlerCloseStatementContext;
  class SingleUpdateStatementContext;
  class MultipleUpdateStatementContext;
  class OrderByClauseContext;
  class OrderByExpressionContext;
  class TableSourcesContext;
  class TableSourceContext;
  class TableSourceItemContext;
  class IndexHintContext;
  class IndexHintTypeContext;
  class JoinPartContext;
  class QueryExpressionContext;
  class QueryExpressionNointoContext;
  class QuerySpecificationContext;
  class QuerySpecificationNointoContext;
  class UnionParenthesisContext;
  class UnionStatementContext;
  class SelectSpecContext;
  class SelectElementsContext;
  class SelectElementContext;
  class SelectIntoExpressionContext;
  class SelectFieldsIntoContext;
  class SelectLinesIntoContext;
  class FromClauseContext;
  class GroupByClauseContext;
  class HavingClauseContext;
  class GroupByItemContext;
  class LimitClauseContext;
  class LimitClauseAtomContext;
  class StartTransactionContext;
  class BeginWorkContext;
  class CommitWorkContext;
  class RollbackWorkContext;
  class SavepointStatementContext;
  class RollbackStatementContext;
  class ReleaseStatementContext;
  class LockTablesContext;
  class UnlockTablesContext;
  class SetAutocommitStatementContext;
  class SetTransactionStatementContext;
  class TransactionModeContext;
  class LockTableElementContext;
  class LockActionContext;
  class TransactionOptionContext;
  class TransactionLevelContext;
  class ChangeMasterContext;
  class ChangeReplicationFilterContext;
  class PurgeBinaryLogsContext;
  class ResetMasterContext;
  class ResetSlaveContext;
  class StartSlaveContext;
  class StopSlaveContext;
  class StartGroupReplicationContext;
  class StopGroupReplicationContext;
  class MasterOptionContext;
  class StringMasterOptionContext;
  class DecimalMasterOptionContext;
  class BoolMasterOptionContext;
  class ChannelOptionContext;
  class ReplicationFilterContext;
  class TablePairContext;
  class ThreadTypeContext;
  class UntilOptionContext;
  class ConnectionOptionContext;
  class GtuidSetContext;
  class XaStartTransactionContext;
  class XaEndTransactionContext;
  class XaPrepareStatementContext;
  class XaCommitWorkContext;
  class XaRollbackWorkContext;
  class XaRecoverWorkContext;
  class PrepareStatementContext;
  class ExecuteStatementContext;
  class DeallocatePrepareContext;
  class RoutineBodyContext;
  class BlockStatementContext;
  class CaseStatementContext;
  class IfStatementContext;
  class IterateStatementContext;
  class LeaveStatementContext;
  class LoopStatementContext;
  class RepeatStatementContext;
  class ReturnStatementContext;
  class WhileStatementContext;
  class CursorStatementContext;
  class DeclareVariableContext;
  class DeclareConditionContext;
  class DeclareCursorContext;
  class DeclareHandlerContext;
  class HandlerConditionValueContext;
  class ProcedureSqlStatementContext;
  class CaseAlternativeContext;
  class ElifAlternativeContext;
  class AlterUserContext;
  class CreateUserContext;
  class DropUserContext;
  class GrantStatementContext;
  class GrantProxyContext;
  class RenameUserContext;
  class RevokeStatementContext;
  class RevokeProxyContext;
  class SetPasswordStatementContext;
  class UserSpecificationContext;
  class UserAuthOptionContext;
  class TlsOptionContext;
  class UserResourceOptionContext;
  class UserPasswordOptionContext;
  class UserLockOptionContext;
  class PrivelegeClauseContext;
  class PrivilegeContext;
  class PrivilegeLevelContext;
  class RenameUserClauseContext;
  class AnalyzeTableContext;
  class CheckTableContext;
  class ChecksumTableContext;
  class OptimizeTableContext;
  class RepairTableContext;
  class CheckTableOptionContext;
  class CreateUdfunctionContext;
  class InstallPluginContext;
  class UninstallPluginContext;
  class SetStatementContext;
  class ShowStatementContext;
  class VariableClauseContext;
  class ShowCommonEntityContext;
  class ShowFilterContext;
  class ShowGlobalInfoClauseContext;
  class ShowSchemaEntityContext;
  class ShowProfileTypeContext;
  class BinlogStatementContext;
  class CacheIndexStatementContext;
  class FlushStatementContext;
  class KillStatementContext;
  class LoadIndexIntoCacheContext;
  class ResetStatementContext;
  class ShutdownStatementContext;
  class TableIndexesContext;
  class FlushOptionContext;
  class FlushTableOptionContext;
  class LoadedTableIndexesContext;
  class SimpleDescribeStatementContext;
  class FullDescribeStatementContext;
  class HelpStatementContext;
  class UseStatementContext;
  class SignalStatementContext;
  class ResignalStatementContext;
  class SignalConditionInformationContext;
  class DiagnosticsStatementContext;
  class DiagnosticsConditionInformationNameContext;
  class DescribeObjectClauseContext;
  class FullIdContext;
  class TableNameContext;
  class FullColumnNameContext;
  class IndexColumnNameContext;
  class UserNameContext;
  class MysqlVariableContext;
  class CharsetNameContext;
  class CollationNameContext;
  class EngineNameContext;
  class UuidSetContext;
  class XidContext;
  class XuidStringIdContext;
  class AuthPluginContext;
  class UidContext;
  class SimpleIdContext;
  class DottedIdContext;
  class DecimalLiteralContext;
  class FileSizeLiteralContext;
  class StringLiteralContext;
  class BooleanLiteralContext;
  class HexadecimalLiteralContext;
  class NullNotnullContext;
  class ConstantContext;
  class DataTypeContext;
  class CollectionOptionsContext;
  class ConvertedDataTypeContext;
  class LengthOneDimensionContext;
  class LengthTwoDimensionContext;
  class LengthTwoOptionalDimensionContext;
  class UidListContext;
  class TablesContext;
  class IndexColumnNamesContext;
  class ExpressionsContext;
  class ExpressionsWithDefaultsContext;
  class ConstantsContext;
  class SimpleStringsContext;
  class UserVariablesContext;
  class DefaultValueContext;
  class CurrentTimestampContext;
  class ExpressionOrDefaultContext;
  class IfExistsContext;
  class IfNotExistsContext;
  class FunctionCallContext;
  class SpecificFunctionContext;
  class CaseFuncAlternativeContext;
  class LevelsInWeightStringContext;
  class LevelInWeightListElementContext;
  class AggregateWindowedFunctionContext;
  class ScalarFunctionNameContext;
  class PasswordFunctionClauseContext;
  class FunctionArgsContext;
  class FunctionArgContext;
  class ExpressionContext;
  class PredicateContext;
  class ExpressionAtomContext;
  class UnaryOperatorContext;
  class ComparisonOperatorContext;
  class LogicalOperatorContext;
  class BitOperatorContext;
  class MathOperatorContext;
  class JsonOperatorContext;
  class CharsetNameBaseContext;
  class TransactionLevelBaseContext;
  class PrivilegesBaseContext;
  class IntervalTypeBaseContext;
  class DataTypeBaseContext;
  class KeywordsCanBeIdContext;
  class FunctionNameBaseContext; 

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    SqlStatementsContext *sqlStatements();
    antlr4::tree::TerminalNode *MINUSMINUS();

   
  };

  RootContext* root();

  class  SqlStatementsContext : public antlr4::ParserRuleContext {
  public:
    SqlStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SqlStatementContext *> sqlStatement();
    SqlStatementContext* sqlStatement(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUSMINUS();
    antlr4::tree::TerminalNode* MINUSMINUS(size_t i);

   
  };

  SqlStatementsContext* sqlStatements();

  class  SqlStatementContext : public antlr4::ParserRuleContext {
  public:
    SqlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DdlStatementContext *ddlStatement();
    DmlStatementContext *dmlStatement();
    TransactionStatementContext *transactionStatement();
    ReplicationStatementContext *replicationStatement();
    PreparedStatementContext *preparedStatement();
    AdministrationStatementContext *administrationStatement();
    UtilityStatementContext *utilityStatement();

   
  };

  SqlStatementContext* sqlStatement();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();

   
  };

  EmptyStatementContext* emptyStatement();

  class  DdlStatementContext : public antlr4::ParserRuleContext {
  public:
    DdlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateDatabaseContext *createDatabase();
    CreateEventContext *createEvent();
    CreateIndexContext *createIndex();
    CreateLogfileGroupContext *createLogfileGroup();
    CreateProcedureContext *createProcedure();
    CreateFunctionContext *createFunction();
    CreateServerContext *createServer();
    CreateTableContext *createTable();
    CreateTablespaceInnodbContext *createTablespaceInnodb();
    CreateTablespaceNdbContext *createTablespaceNdb();
    CreateTriggerContext *createTrigger();
    CreateViewContext *createView();
    AlterDatabaseContext *alterDatabase();
    AlterEventContext *alterEvent();
    AlterFunctionContext *alterFunction();
    AlterInstanceContext *alterInstance();
    AlterLogfileGroupContext *alterLogfileGroup();
    AlterProcedureContext *alterProcedure();
    AlterServerContext *alterServer();
    AlterTableContext *alterTable();
    AlterTablespaceContext *alterTablespace();
    AlterViewContext *alterView();
    DropDatabaseContext *dropDatabase();
    DropEventContext *dropEvent();
    DropIndexContext *dropIndex();
    DropLogfileGroupContext *dropLogfileGroup();
    DropProcedureContext *dropProcedure();
    DropFunctionContext *dropFunction();
    DropServerContext *dropServer();
    DropTableContext *dropTable();
    DropTablespaceContext *dropTablespace();
    DropTriggerContext *dropTrigger();
    DropViewContext *dropView();
    RenameTableContext *renameTable();
    TruncateTableContext *truncateTable();

   
  };

  DdlStatementContext* ddlStatement();

  class  DmlStatementContext : public antlr4::ParserRuleContext {
  public:
    DmlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    InsertStatementContext *insertStatement();
    UpdateStatementContext *updateStatement();
    DeleteStatementContext *deleteStatement();
    ReplaceStatementContext *replaceStatement();
    CallStatementContext *callStatement();
    LoadDataStatementContext *loadDataStatement();
    LoadXmlStatementContext *loadXmlStatement();
    DoStatementContext *doStatement();
    HandlerStatementContext *handlerStatement();

   
  };

  DmlStatementContext* dmlStatement();

  class  TransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    TransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartTransactionContext *startTransaction();
    BeginWorkContext *beginWork();
    CommitWorkContext *commitWork();
    RollbackWorkContext *rollbackWork();
    SavepointStatementContext *savepointStatement();
    RollbackStatementContext *rollbackStatement();
    ReleaseStatementContext *releaseStatement();
    LockTablesContext *lockTables();
    UnlockTablesContext *unlockTables();

   
  };

  TransactionStatementContext* transactionStatement();

  class  ReplicationStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplicationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChangeMasterContext *changeMaster();
    ChangeReplicationFilterContext *changeReplicationFilter();
    PurgeBinaryLogsContext *purgeBinaryLogs();
    ResetMasterContext *resetMaster();
    ResetSlaveContext *resetSlave();
    StartSlaveContext *startSlave();
    StopSlaveContext *stopSlave();
    StartGroupReplicationContext *startGroupReplication();
    StopGroupReplicationContext *stopGroupReplication();
    XaStartTransactionContext *xaStartTransaction();
    XaEndTransactionContext *xaEndTransaction();
    XaPrepareStatementContext *xaPrepareStatement();
    XaCommitWorkContext *xaCommitWork();
    XaRollbackWorkContext *xaRollbackWork();
    XaRecoverWorkContext *xaRecoverWork();

   
  };

  ReplicationStatementContext* replicationStatement();

  class  PreparedStatementContext : public antlr4::ParserRuleContext {
  public:
    PreparedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrepareStatementContext *prepareStatement();
    ExecuteStatementContext *executeStatement();
    DeallocatePrepareContext *deallocatePrepare();

   
  };

  PreparedStatementContext* preparedStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockStatementContext *blockStatement();
    CaseStatementContext *caseStatement();
    IfStatementContext *ifStatement();
    LeaveStatementContext *leaveStatement();
    LoopStatementContext *loopStatement();
    RepeatStatementContext *repeatStatement();
    WhileStatementContext *whileStatement();
    IterateStatementContext *iterateStatement();
    ReturnStatementContext *returnStatement();
    CursorStatementContext *cursorStatement();

   
  };

  CompoundStatementContext* compoundStatement();

  class  AdministrationStatementContext : public antlr4::ParserRuleContext {
  public:
    AdministrationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterUserContext *alterUser();
    CreateUserContext *createUser();
    DropUserContext *dropUser();
    GrantStatementContext *grantStatement();
    GrantProxyContext *grantProxy();
    RenameUserContext *renameUser();
    RevokeStatementContext *revokeStatement();
    RevokeProxyContext *revokeProxy();
    AnalyzeTableContext *analyzeTable();
    CheckTableContext *checkTable();
    ChecksumTableContext *checksumTable();
    OptimizeTableContext *optimizeTable();
    RepairTableContext *repairTable();
    CreateUdfunctionContext *createUdfunction();
    InstallPluginContext *installPlugin();
    UninstallPluginContext *uninstallPlugin();
    SetStatementContext *setStatement();
    ShowStatementContext *showStatement();
    BinlogStatementContext *binlogStatement();
    CacheIndexStatementContext *cacheIndexStatement();
    FlushStatementContext *flushStatement();
    KillStatementContext *killStatement();
    LoadIndexIntoCacheContext *loadIndexIntoCache();
    ResetStatementContext *resetStatement();
    ShutdownStatementContext *shutdownStatement();

   
  };

  AdministrationStatementContext* administrationStatement();

  class  UtilityStatementContext : public antlr4::ParserRuleContext {
  public:
    UtilityStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDescribeStatementContext *simpleDescribeStatement();
    FullDescribeStatementContext *fullDescribeStatement();
    HelpStatementContext *helpStatement();
    UseStatementContext *useStatement();
    SignalStatementContext *signalStatement();
    ResignalStatementContext *resignalStatement();
    DiagnosticsStatementContext *diagnosticsStatement();

   
  };

  UtilityStatementContext* utilityStatement();

  class  CreateDatabaseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dbFormat = nullptr;
    CreateDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    IfNotExistsContext *ifNotExists();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);

   
  };

  CreateDatabaseContext* createDatabase();

  class  CreateEventContext : public antlr4::ParserRuleContext {
  public:
    CreateEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    FullIdContext *fullId();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    ScheduleExpressionContext *scheduleExpression();
    antlr4::tree::TerminalNode *DO();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    IfNotExistsContext *ifNotExists();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    EnableTypeContext *enableType();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *NOT();

   
  };

  CreateEventContext* createEvent();

  class  CreateIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *intimeAction = nullptr;
    antlr4::Token *indexCategory = nullptr;
    antlr4::Token *algType = nullptr;
    antlr4::Token *lockType = nullptr;
    CreateIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    UidContext *uid();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    IndexColumnNamesContext *indexColumnNames();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALGORITHM();
    antlr4::tree::TerminalNode* ALGORITHM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCK();
    antlr4::tree::TerminalNode* LOCK(size_t i);
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INPLACE();
    antlr4::tree::TerminalNode* INPLACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COPY();
    antlr4::tree::TerminalNode* COPY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARED();
    antlr4::tree::TerminalNode* SHARED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCLUSIVE();
    antlr4::tree::TerminalNode* EXCLUSIVE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);

   
  };

  CreateIndexContext* createIndex();

  class  CreateLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *undoFile = nullptr;
    MySqlParser::FileSizeLiteralContext *initSize = nullptr;
    MySqlParser::FileSizeLiteralContext *undoSize = nullptr;
    MySqlParser::FileSizeLiteralContext *redoSize = nullptr;
    antlr4::Token *comment = nullptr;
    CreateLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    std::vector<FileSizeLiteralContext *> fileSizeLiteral();
    FileSizeLiteralContext* fileSizeLiteral(size_t i);

   
  };

  CreateLogfileGroupContext* createLogfileGroup();

  class  CreateProcedureContext : public antlr4::ParserRuleContext {
  public:
    CreateProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    std::vector<ProcedureParameterContext *> procedureParameter();
    ProcedureParameterContext* procedureParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

   
  };

  CreateProcedureContext* createProcedure();

  class  CreateFunctionContext : public antlr4::ParserRuleContext {
  public:
    CreateFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *RETURNS();
    DataTypeContext *dataType();
    RoutineBodyContext *routineBody();
    ReturnStatementContext *returnStatement();
    OwnerStatementContext *ownerStatement();
    std::vector<FunctionParameterContext *> functionParameter();
    FunctionParameterContext* functionParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

   
  };

  CreateFunctionContext* createFunction();

  class  CreateServerContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *wrapperName = nullptr;
    CreateServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVER();
    UidContext *uid();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *MYSQL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  CreateServerContext* createServer();

  class  CreateTableContext : public antlr4::ParserRuleContext {
  public:
    CreateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateTableContext() = default;
    void copyFrom(CreateTableContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CopyCreateTableContext : public CreateTableContext {
  public:
    CopyCreateTableContext(CreateTableContext *ctx);

    MySqlParser::TableNameContext *parenthesisTable = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfNotExistsContext *ifNotExists();
  };

  class  ColumnCreateTableContext : public CreateTableContext {
  public:
    ColumnCreateTableContext(CreateTableContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    CreateDefinitionsContext *createDefinitions();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfNotExistsContext *ifNotExists();
    std::vector<TableOptionContext *> tableOption();
    TableOptionContext* tableOption(size_t i);
    PartitionDefinitionsContext *partitionDefinitions();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  QueryCreateTableContext : public CreateTableContext {
  public:
    QueryCreateTableContext(CreateTableContext *ctx);

    antlr4::Token *keyViolate = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfNotExistsContext *ifNotExists();
    CreateDefinitionsContext *createDefinitions();
    std::vector<TableOptionContext *> tableOption();
    TableOptionContext* tableOption(size_t i);
    PartitionDefinitionsContext *partitionDefinitions();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *REPLACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  CreateTableContext* createTable();

  class  CreateTablespaceInnodbContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *datafile = nullptr;
    MySqlParser::FileSizeLiteralContext *fileBlockSize = nullptr;
    CreateTablespaceInnodbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    FileSizeLiteralContext *fileSizeLiteral();

   
  };

  CreateTablespaceInnodbContext* createTablespaceInnodb();

  class  CreateTablespaceNdbContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *datafile = nullptr;
    MySqlParser::FileSizeLiteralContext *extentSize = nullptr;
    MySqlParser::FileSizeLiteralContext *initialSize = nullptr;
    MySqlParser::FileSizeLiteralContext *autoextendSize = nullptr;
    MySqlParser::FileSizeLiteralContext *maxSize = nullptr;
    antlr4::Token *comment = nullptr;
    CreateTablespaceNdbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    std::vector<FileSizeLiteralContext *> fileSizeLiteral();
    FileSizeLiteralContext* fileSizeLiteral(size_t i);

   
  };

  CreateTablespaceNdbContext* createTablespaceNdb();

  class  CreateTriggerContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::FullIdContext *thisTrigger = nullptr;
    antlr4::Token *triggerTime = nullptr;
    antlr4::Token *triggerEvent = nullptr;
    antlr4::Token *triggerPlace = nullptr;
    MySqlParser::FullIdContext *otherTrigger = nullptr;
    CreateTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ROW();
    RoutineBodyContext *routineBody();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *FOLLOWS();
    antlr4::tree::TerminalNode *PRECEDES();

   
  };

  CreateTriggerContext* createTrigger();

  class  CreateViewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algType = nullptr;
    antlr4::Token *secContext = nullptr;
    antlr4::Token *checkOption = nullptr;
    CreateViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *AS();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();

   
  };

  CreateViewContext* createView();

  class  CreateDatabaseOptionContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    CharsetNameContext *charsetName();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();

   
  };

  CreateDatabaseOptionContext* createDatabaseOption();

  class  OwnerStatementContext : public antlr4::ParserRuleContext {
  public:
    OwnerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    UserNameContext *userName();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

   
  };

  OwnerStatementContext* ownerStatement();

  class  ScheduleExpressionContext : public antlr4::ParserRuleContext {
  public:
    ScheduleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ScheduleExpressionContext() = default;
    void copyFrom(ScheduleExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreciseScheduleContext : public ScheduleExpressionContext {
  public:
    PreciseScheduleContext(ScheduleExpressionContext *ctx);

    antlr4::tree::TerminalNode *AT();
    TimestampValueContext *timestampValue();
    std::vector<IntervalExprContext *> intervalExpr();
    IntervalExprContext* intervalExpr(size_t i);
  };

  class  IntervalScheduleContext : public ScheduleExpressionContext {
  public:
    IntervalScheduleContext(ScheduleExpressionContext *ctx);

    MySqlParser::TimestampValueContext *startTimestamp = nullptr;
    MySqlParser::IntervalExprContext *intervalExprContext = nullptr;
    std::vector<IntervalExprContext *> startIntervals;
    MySqlParser::TimestampValueContext *endTimestamp = nullptr;
    std::vector<IntervalExprContext *> endIntervals;
    antlr4::tree::TerminalNode *EVERY();
    IntervalTypeContext *intervalType();
    DecimalLiteralContext *decimalLiteral();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *ENDS();
    std::vector<TimestampValueContext *> timestampValue();
    TimestampValueContext* timestampValue(size_t i);
    std::vector<IntervalExprContext *> intervalExpr();
    IntervalExprContext* intervalExpr(size_t i);
  };

  ScheduleExpressionContext* scheduleExpression();

  class  TimestampValueContext : public antlr4::ParserRuleContext {
  public:
    TimestampValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    StringLiteralContext *stringLiteral();
    DecimalLiteralContext *decimalLiteral();
    ExpressionContext *expression();

   
  };

  TimestampValueContext* timestampValue();

  class  IntervalExprContext : public antlr4::ParserRuleContext {
  public:
    IntervalExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *INTERVAL();
    IntervalTypeContext *intervalType();
    DecimalLiteralContext *decimalLiteral();
    ExpressionContext *expression();

   
  };

  IntervalExprContext* intervalExpr();

  class  IntervalTypeContext : public antlr4::ParserRuleContext {
  public:
    IntervalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntervalTypeBaseContext *intervalTypeBase();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEAR_MONTH();
    antlr4::tree::TerminalNode *DAY_HOUR();
    antlr4::tree::TerminalNode *DAY_MINUTE();
    antlr4::tree::TerminalNode *DAY_SECOND();
    antlr4::tree::TerminalNode *HOUR_MINUTE();
    antlr4::tree::TerminalNode *HOUR_SECOND();
    antlr4::tree::TerminalNode *MINUTE_SECOND();
    antlr4::tree::TerminalNode *SECOND_MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE_MICROSECOND();
    antlr4::tree::TerminalNode *HOUR_MICROSECOND();
    antlr4::tree::TerminalNode *DAY_MICROSECOND();

   
  };

  IntervalTypeContext* intervalType();

  class  EnableTypeContext : public antlr4::ParserRuleContext {
  public:
    EnableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SLAVE();

   
  };

  EnableTypeContext* enableType();

  class  IndexTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *HASH();

   
  };

  IndexTypeContext* indexType();

  class  IndexOptionContext : public antlr4::ParserRuleContext {
  public:
    IndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PARSER();
    UidContext *uid();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *INVISIBLE();
    antlr4::tree::TerminalNode *VISIBLE();

   
  };

  IndexOptionContext* indexOption();

  class  ProcedureParameterContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *direction = nullptr;
    ProcedureParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();

   
  };

  ProcedureParameterContext* procedureParameter();

  class  FunctionParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    DataTypeContext *dataType();

   
  };

  FunctionParameterContext* functionParameter();

  class  RoutineOptionContext : public antlr4::ParserRuleContext {
  public:
    RoutineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RoutineOptionContext() = default;
    void copyFrom(RoutineOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RoutineBehaviorContext : public RoutineOptionContext {
  public:
    RoutineBehaviorContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
  };

  class  RoutineLanguageContext : public RoutineOptionContext {
  public:
    RoutineLanguageContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
  };

  class  RoutineCommentContext : public RoutineOptionContext {
  public:
    RoutineCommentContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  class  RoutineSecurityContext : public RoutineOptionContext {
  public:
    RoutineSecurityContext(RoutineOptionContext *ctx);

    antlr4::Token *context = nullptr;
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
  };

  class  RoutineDataContext : public RoutineOptionContext {
  public:
    RoutineDataContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *MODIFIES();
  };

  RoutineOptionContext* routineOption();

  class  ServerOptionContext : public antlr4::ParserRuleContext {
  public:
    ServerOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *SOCKET();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PORT();
    DecimalLiteralContext *decimalLiteral();

   
  };

  ServerOptionContext* serverOption();

  class  CreateDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    CreateDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<CreateDefinitionContext *> createDefinition();
    CreateDefinitionContext* createDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  CreateDefinitionsContext* createDefinitions();

  class  CreateDefinitionContext : public antlr4::ParserRuleContext {
  public:
    CreateDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateDefinitionContext() = default;
    void copyFrom(CreateDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColumnDeclarationContext : public CreateDefinitionContext {
  public:
    ColumnDeclarationContext(CreateDefinitionContext *ctx);

    UidContext *uid();
    ColumnDefinitionContext *columnDefinition();
  };

  class  ConstraintDeclarationContext : public CreateDefinitionContext {
  public:
    ConstraintDeclarationContext(CreateDefinitionContext *ctx);

    TableConstraintContext *tableConstraint();
  };

  class  IndexDeclarationContext : public CreateDefinitionContext {
  public:
    IndexDeclarationContext(CreateDefinitionContext *ctx);

    IndexColumnDefinitionContext *indexColumnDefinition();
  };

  CreateDefinitionContext* createDefinition();

  class  ColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    std::vector<ColumnConstraintContext *> columnConstraint();
    ColumnConstraintContext* columnConstraint(size_t i);

   
  };

  ColumnDefinitionContext* columnDefinition();

  class  ColumnConstraintContext : public antlr4::ParserRuleContext {
  public:
    ColumnConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ColumnConstraintContext() = default;
    void copyFrom(ColumnConstraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StorageColumnConstraintContext : public ColumnConstraintContext {
  public:
    StorageColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::Token *storageval = nullptr;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *DEFAULT();
  };

  class  AutoIncrementColumnConstraintContext : public ColumnConstraintContext {
  public:
    AutoIncrementColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *UPDATE();
    CurrentTimestampContext *currentTimestamp();
  };

  class  CommentColumnConstraintContext : public ColumnConstraintContext {
  public:
    CommentColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  class  UniqueKeyColumnConstraintContext : public ColumnConstraintContext {
  public:
    UniqueKeyColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *KEY();
  };

  class  SerialDefaultColumnConstraintContext : public ColumnConstraintContext {
  public:
    SerialDefaultColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *SERIAL();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *VALUE();
  };

  class  GeneratedColumnConstraintContext : public ColumnConstraintContext {
  public:
    GeneratedColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *STORED();
  };

  class  FormatColumnConstraintContext : public ColumnConstraintContext {
  public:
    FormatColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::Token *colformat = nullptr;
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *DEFAULT();
  };

  class  CollateColumnConstraintContext : public ColumnConstraintContext {
  public:
    CollateColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
  };

  class  PrimaryKeyColumnConstraintContext : public ColumnConstraintContext {
  public:
    PrimaryKeyColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *PRIMARY();
  };

  class  CheckColumnConstraintContext : public ColumnConstraintContext {
  public:
    CheckColumnConstraintContext(ColumnConstraintContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONSTRAINT();
    UidContext *uid();
  };

  class  NullColumnConstraintContext : public ColumnConstraintContext {
  public:
    NullColumnConstraintContext(ColumnConstraintContext *ctx);

    NullNotnullContext *nullNotnull();
  };

  class  DefaultColumnConstraintContext : public ColumnConstraintContext {
  public:
    DefaultColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT();
    DefaultValueContext *defaultValue();
  };

  class  ReferenceColumnConstraintContext : public ColumnConstraintContext {
  public:
    ReferenceColumnConstraintContext(ColumnConstraintContext *ctx);

    ReferenceDefinitionContext *referenceDefinition();
  };

  ColumnConstraintContext* columnConstraint();

  class  TableConstraintContext : public antlr4::ParserRuleContext {
  public:
    TableConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableConstraintContext() = default;
    void copyFrom(TableConstraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UniqueKeyTableConstraintContext : public TableConstraintContext {
  public:
    UniqueKeyTableConstraintContext(TableConstraintContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::Token *indexFormat = nullptr;
    MySqlParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *UNIQUE();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
  };

  class  CheckTableConstraintContext : public TableConstraintContext {
  public:
    CheckTableConstraintContext(TableConstraintContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONSTRAINT();
    UidContext *uid();
  };

  class  PrimaryKeyTableConstraintContext : public TableConstraintContext {
  public:
    PrimaryKeyTableConstraintContext(TableConstraintContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    MySqlParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
  };

  class  ForeignKeyTableConstraintContext : public TableConstraintContext {
  public:
    ForeignKeyTableConstraintContext(TableConstraintContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    MySqlParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    ReferenceDefinitionContext *referenceDefinition();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
  };

  TableConstraintContext* tableConstraint();

  class  ReferenceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *matchType = nullptr;
    ReferenceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES();
    TableNameContext *tableName();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *MATCH();
    ReferenceActionContext *referenceAction();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *SIMPLE();

   
  };

  ReferenceDefinitionContext* referenceDefinition();

  class  ReferenceActionContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::ReferenceControlTypeContext *onDelete = nullptr;
    MySqlParser::ReferenceControlTypeContext *onUpdate = nullptr;
    ReferenceActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *DELETE();
    std::vector<ReferenceControlTypeContext *> referenceControlType();
    ReferenceControlTypeContext* referenceControlType(size_t i);
    antlr4::tree::TerminalNode *UPDATE();

   
  };

  ReferenceActionContext* referenceAction();

  class  ReferenceControlTypeContext : public antlr4::ParserRuleContext {
  public:
    ReferenceControlTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();

   
  };

  ReferenceControlTypeContext* referenceControlType();

  class  IndexColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    IndexColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IndexColumnDefinitionContext() = default;
    void copyFrom(IndexColumnDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpecialIndexDeclarationContext : public IndexColumnDefinitionContext {
  public:
    SpecialIndexDeclarationContext(IndexColumnDefinitionContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    UidContext *uid();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
  };

  class  SimpleIndexDeclarationContext : public IndexColumnDefinitionContext {
  public:
    SimpleIndexDeclarationContext(IndexColumnDefinitionContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    UidContext *uid();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
  };

  IndexColumnDefinitionContext* indexColumnDefinition();

  class  TableOptionContext : public antlr4::ParserRuleContext {
  public:
    TableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableOptionContext() = default;
    void copyFrom(TableOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableOptionEngineContext : public TableOptionContext {
  public:
    TableOptionEngineContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionMaxRowsContext : public TableOptionContext {
  public:
    TableOptionMaxRowsContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *MAX_ROWS();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionCollateContext : public TableOptionContext {
  public:
    TableOptionCollateContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionPersistentContext : public TableOptionContext {
  public:
    TableOptionPersistentContext(TableOptionContext *ctx);

    antlr4::Token *extBoolValue = nullptr;
    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionTablespaceContext : public TableOptionContext {
  public:
    TableOptionTablespaceContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    TablespaceStorageContext *tablespaceStorage();
  };

  class  TableOptionPackKeysContext : public TableOptionContext {
  public:
    TableOptionPackKeysContext(TableOptionContext *ctx);

    antlr4::Token *extBoolValue = nullptr;
    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionPasswordContext : public TableOptionContext {
  public:
    TableOptionPasswordContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionUnionContext : public TableOptionContext {
  public:
    TableOptionUnionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    TablesContext *tables();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionSamplePageContext : public TableOptionContext {
  public:
    TableOptionSamplePageContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionCharsetContext : public TableOptionContext {
  public:
    TableOptionCharsetContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    CharsetNameContext *charsetName();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionIndexDirectoryContext : public TableOptionContext {
  public:
    TableOptionIndexDirectoryContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionKeyBlockSizeContext : public TableOptionContext {
  public:
    TableOptionKeyBlockSizeContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionEncryptionContext : public TableOptionContext {
  public:
    TableOptionEncryptionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionDataDirectoryContext : public TableOptionContext {
  public:
    TableOptionDataDirectoryContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionRecalculationContext : public TableOptionContext {
  public:
    TableOptionRecalculationContext(TableOptionContext *ctx);

    antlr4::Token *extBoolValue = nullptr;
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionAutoIncrementContext : public TableOptionContext {
  public:
    TableOptionAutoIncrementContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionChecksumContext : public TableOptionContext {
  public:
    TableOptionChecksumContext(TableOptionContext *ctx);

    antlr4::Token *boolValue = nullptr;
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *PAGE_CHECKSUM();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionDelayContext : public TableOptionContext {
  public:
    TableOptionDelayContext(TableOptionContext *ctx);

    antlr4::Token *boolValue = nullptr;
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionConnectionContext : public TableOptionContext {
  public:
    TableOptionConnectionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionCommentContext : public TableOptionContext {
  public:
    TableOptionCommentContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionAverageContext : public TableOptionContext {
  public:
    TableOptionAverageContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionRowFormatContext : public TableOptionContext {
  public:
    TableOptionRowFormatContext(TableOptionContext *ctx);

    antlr4::Token *rowFormat = nullptr;
    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionCompressionContext : public TableOptionContext {
  public:
    TableOptionCompressionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionInsertMethodContext : public TableOptionContext {
  public:
    TableOptionInsertMethodContext(TableOptionContext *ctx);

    antlr4::Token *insertMethod = nullptr;
    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  TableOptionMinRowsContext : public TableOptionContext {
  public:
    TableOptionMinRowsContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *MIN_ROWS();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  TableOptionContext* tableOption();

  class  TablespaceStorageContext : public antlr4::ParserRuleContext {
  public:
    TablespaceStorageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *DEFAULT();

   
  };

  TablespaceStorageContext* tablespaceStorage();

  class  PartitionDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::DecimalLiteralContext *count = nullptr;
    MySqlParser::DecimalLiteralContext *subCount = nullptr;
    PartitionDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    PartitionFunctionDefinitionContext *partitionFunctionDefinition();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *SUBPARTITION();
    SubpartitionFunctionDefinitionContext *subpartitionFunctionDefinition();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  PartitionDefinitionsContext* partitionDefinitions();

  class  PartitionFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionFunctionDefinitionContext() = default;
    void copyFrom(PartitionFunctionDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionFunctionKeyContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionKeyContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::Token *algType = nullptr;
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *TWO_DECIMAL();
  };

  class  PartitionFunctionHashContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionHashContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LINEAR();
  };

  class  PartitionFunctionListContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionListContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COLUMNS();
    UidListContext *uidList();
  };

  class  PartitionFunctionRangeContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionRangeContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COLUMNS();
    UidListContext *uidList();
  };

  PartitionFunctionDefinitionContext* partitionFunctionDefinition();

  class  SubpartitionFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SubpartitionFunctionDefinitionContext() = default;
    void copyFrom(SubpartitionFunctionDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubPartitionFunctionHashContext : public SubpartitionFunctionDefinitionContext {
  public:
    SubPartitionFunctionHashContext(SubpartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LINEAR();
  };

  class  SubPartitionFunctionKeyContext : public SubpartitionFunctionDefinitionContext {
  public:
    SubPartitionFunctionKeyContext(SubpartitionFunctionDefinitionContext *ctx);

    antlr4::Token *algType = nullptr;
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *TWO_DECIMAL();
  };

  SubpartitionFunctionDefinitionContext* subpartitionFunctionDefinition();

  class  PartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionDefinitionContext() = default;
    void copyFrom(PartitionDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionComparisonContext : public PartitionDefinitionContext {
  public:
    PartitionComparisonContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *THAN();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<PartitionDefinerAtomContext *> partitionDefinerAtom();
    PartitionDefinerAtomContext* partitionDefinerAtom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
  };

  class  PartitionListAtomContext : public PartitionDefinitionContext {
  public:
    PartitionListAtomContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *IN();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<PartitionDefinerAtomContext *> partitionDefinerAtom();
    PartitionDefinerAtomContext* partitionDefinerAtom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
  };

  class  PartitionListVectorContext : public PartitionDefinitionContext {
  public:
    PartitionListVectorContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *IN();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<PartitionDefinerVectorContext *> partitionDefinerVector();
    PartitionDefinerVectorContext* partitionDefinerVector(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
  };

  class  PartitionSimpleContext : public PartitionDefinitionContext {
  public:
    PartitionSimpleContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  PartitionDefinitionContext* partitionDefinition();

  class  PartitionDefinerAtomContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinerAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MAXVALUE();

   
  };

  PartitionDefinerAtomContext* partitionDefinerAtom();

  class  PartitionDefinerVectorContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinerVectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinerAtomContext *> partitionDefinerAtom();
    PartitionDefinerAtomContext* partitionDefinerAtom(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  PartitionDefinerVectorContext* partitionDefinerVector();

  class  SubpartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION();
    UidContext *uid();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);

   
  };

  SubpartitionDefinitionContext* subpartitionDefinition();

  class  PartitionOptionContext : public antlr4::ParserRuleContext {
  public:
    PartitionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionOptionContext() = default;
    void copyFrom(PartitionOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionOptionCommentContext : public PartitionOptionContext {
  public:
    PartitionOptionCommentContext(PartitionOptionContext *ctx);

    antlr4::Token *comment = nullptr;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  PartitionOptionNodeGroupContext : public PartitionOptionContext {
  public:
    PartitionOptionNodeGroupContext(PartitionOptionContext *ctx);

    MySqlParser::UidContext *nodegroup = nullptr;
    antlr4::tree::TerminalNode *NODEGROUP();
    UidContext *uid();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  PartitionOptionIndexDirectoryContext : public PartitionOptionContext {
  public:
    PartitionOptionIndexDirectoryContext(PartitionOptionContext *ctx);

    antlr4::Token *indexDirectory = nullptr;
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  PartitionOptionMaxRowsContext : public PartitionOptionContext {
  public:
    PartitionOptionMaxRowsContext(PartitionOptionContext *ctx);

    MySqlParser::DecimalLiteralContext *maxRows = nullptr;
    antlr4::tree::TerminalNode *MAX_ROWS();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  PartitionOptionTablespaceContext : public PartitionOptionContext {
  public:
    PartitionOptionTablespaceContext(PartitionOptionContext *ctx);

    MySqlParser::UidContext *tablespace = nullptr;
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  PartitionOptionEngineContext : public PartitionOptionContext {
  public:
    PartitionOptionEngineContext(PartitionOptionContext *ctx);

    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  PartitionOptionMinRowsContext : public PartitionOptionContext {
  public:
    PartitionOptionMinRowsContext(PartitionOptionContext *ctx);

    MySqlParser::DecimalLiteralContext *minRows = nullptr;
    antlr4::tree::TerminalNode *MIN_ROWS();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  PartitionOptionDataDirectoryContext : public PartitionOptionContext {
  public:
    PartitionOptionDataDirectoryContext(PartitionOptionContext *ctx);

    antlr4::Token *dataDirectory = nullptr;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  PartitionOptionContext* partitionOption();

  class  AlterDatabaseContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterDatabaseContext() = default;
    void copyFrom(AlterDatabaseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterUpgradeNameContext : public AlterDatabaseContext {
  public:
    AlterUpgradeNameContext(AlterDatabaseContext *ctx);

    antlr4::Token *dbFormat = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    UidContext *uid();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
  };

  class  AlterSimpleDatabaseContext : public AlterDatabaseContext {
  public:
    AlterSimpleDatabaseContext(AlterDatabaseContext *ctx);

    antlr4::Token *dbFormat = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    UidContext *uid();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);
  };

  AlterDatabaseContext* alterDatabase();

  class  AlterEventContext : public antlr4::ParserRuleContext {
  public:
    AlterEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EVENT();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    OwnerStatementContext *ownerStatement();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    ScheduleExpressionContext *scheduleExpression();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    EnableTypeContext *enableType();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *DO();
    RoutineBodyContext *routineBody();
    antlr4::tree::TerminalNode *NOT();

   
  };

  AlterEventContext* alterEvent();

  class  AlterFunctionContext : public antlr4::ParserRuleContext {
  public:
    AlterFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *FUNCTION();
    FullIdContext *fullId();
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

   
  };

  AlterFunctionContext* alterFunction();

  class  AlterInstanceContext : public antlr4::ParserRuleContext {
  public:
    AlterInstanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();

   
  };

  AlterInstanceContext* alterInstance();

  class  AlterLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    UidContext *uid();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *WAIT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);

   
  };

  AlterLogfileGroupContext* alterLogfileGroup();

  class  AlterProcedureContext : public antlr4::ParserRuleContext {
  public:
    AlterProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PROCEDURE();
    FullIdContext *fullId();
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

   
  };

  AlterProcedureContext* alterProcedure();

  class  AlterServerContext : public antlr4::ParserRuleContext {
  public:
    AlterServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    UidContext *uid();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  AlterServerContext* alterServer();

  class  AlterTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *intimeAction = nullptr;
    AlterTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *IGNORE();
    std::vector<AlterSpecificationContext *> alterSpecification();
    AlterSpecificationContext* alterSpecification(size_t i);
    PartitionDefinitionsContext *partitionDefinitions();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  AlterTableContext* alterTable();

  class  AlterTablespaceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *objectAction = nullptr;
    AlterTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *WAIT();

   
  };

  AlterTablespaceContext* alterTablespace();

  class  AlterViewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algType = nullptr;
    antlr4::Token *secContext = nullptr;
    antlr4::Token *checkOpt = nullptr;
    AlterViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *VIEW();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *AS();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();

   
  };

  AlterViewContext* alterView();

  class  AlterSpecificationContext : public antlr4::ParserRuleContext {
  public:
    AlterSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterSpecificationContext() = default;
    void copyFrom(AlterSpecificationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterByDisableKeysContext : public AlterSpecificationContext {
  public:
    AlterByDisableKeysContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *KEYS();
  };

  class  AlterByDefaultCharsetContext : public AlterSpecificationContext {
  public:
    AlterByDefaultCharsetContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
  };

  class  AlterByRenameColumnContext : public AlterSpecificationContext {
  public:
    AlterByRenameColumnContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *oldColumn = nullptr;
    MySqlParser::UidContext *newColumn = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *TO();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
  };

  class  AlterByConvertCharsetContext : public AlterSpecificationContext {
  public:
    AlterByConvertCharsetContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
  };

  class  AlterByAddPartitionContext : public AlterSpecificationContext {
  public:
    AlterByAddPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  AlterByAddForeignKeyContext : public AlterSpecificationContext {
  public:
    AlterByAddForeignKeyContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    MySqlParser::UidContext *indexName = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    ReferenceDefinitionContext *referenceDefinition();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
  };

  class  AlterByRenameIndexContext : public AlterSpecificationContext {
  public:
    AlterByRenameIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
  };

  class  AlterByRemovePartitioningContext : public AlterSpecificationContext {
  public:
    AlterByRemovePartitioningContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *PARTITIONING();
  };

  class  AlterByRenameContext : public AlterSpecificationContext {
  public:
    AlterByRenameContext(AlterSpecificationContext *ctx);

    antlr4::Token *renameFormat = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    UidContext *uid();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *AS();
  };

  class  AlterByOptimizePartitionContext : public AlterSpecificationContext {
  public:
    AlterByOptimizePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
  };

  class  AlterByImportTablespaceContext : public AlterSpecificationContext {
  public:
    AlterByImportTablespaceContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *TABLESPACE();
  };

  class  AlterByCoalescePartitionContext : public AlterSpecificationContext {
  public:
    AlterByCoalescePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *PARTITION();
    DecimalLiteralContext *decimalLiteral();
  };

  class  AlterByDropConstraintCheckContext : public AlterSpecificationContext {
  public:
    AlterByDropConstraintCheckContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *CHECK();
  };

  class  AlterByAddColumnsContext : public AlterSpecificationContext {
  public:
    AlterByAddColumnsContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<ColumnDefinitionContext *> columnDefinition();
    ColumnDefinitionContext* columnDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  AlterByAlterIndexVisibilityContext : public AlterSpecificationContext {
  public:
    AlterByAlterIndexVisibilityContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INDEX();
    UidContext *uid();
    antlr4::tree::TerminalNode *VISIBLE();
    antlr4::tree::TerminalNode *INVISIBLE();
  };

  class  AlterByDropForeignKeyContext : public AlterSpecificationContext {
  public:
    AlterByDropForeignKeyContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    UidContext *uid();
  };

  class  AlterByAddCheckTableConstraintContext : public AlterSpecificationContext {
  public:
    AlterByAddCheckTableConstraintContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONSTRAINT();
    UidContext *uid();
  };

  class  AlterByRebuildPartitionContext : public AlterSpecificationContext {
  public:
    AlterByRebuildPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
  };

  class  AlterByUpgradePartitioningContext : public AlterSpecificationContext {
  public:
    AlterByUpgradePartitioningContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *PARTITIONING();
  };

  class  AlterByRepairPartitionContext : public AlterSpecificationContext {
  public:
    AlterByRepairPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
  };

  class  AlterByExchangePartitionContext : public AlterSpecificationContext {
  public:
    AlterByExchangePartitionContext(AlterSpecificationContext *ctx);

    antlr4::Token *validationFormat = nullptr;
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITHOUT();
  };

  class  AlterByAddIndexContext : public AlterSpecificationContext {
  public:
    AlterByAddIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *ADD();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    UidContext *uid();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
  };

  class  AlterByDropColumnContext : public AlterSpecificationContext {
  public:
    AlterByDropColumnContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *RESTRICT();
  };

  class  AlterByImportPartitionContext : public AlterSpecificationContext {
  public:
    AlterByImportPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
  };

  class  AlterByChangeDefaultContext : public AlterSpecificationContext {
  public:
    AlterByChangeDefaultContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    UidContext *uid();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DEFAULT();
    DefaultValueContext *defaultValue();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMN();
  };

  class  AlterByForceContext : public AlterSpecificationContext {
  public:
    AlterByForceContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *FORCE();
  };

  class  AlterByDropPartitionContext : public AlterSpecificationContext {
  public:
    AlterByDropPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
  };

  class  AlterByAddSpecialIndexContext : public AlterSpecificationContext {
  public:
    AlterByAddSpecialIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *keyType = nullptr;
    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *ADD();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    UidContext *uid();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
  };

  class  AlterByModifyColumnContext : public AlterSpecificationContext {
  public:
    AlterByModifyColumnContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *MODIFY();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    ColumnDefinitionContext *columnDefinition();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
  };

  class  AlterByTableOptionContext : public AlterSpecificationContext {
  public:
    AlterByTableOptionContext(AlterSpecificationContext *ctx);

    std::vector<TableOptionContext *> tableOption();
    TableOptionContext* tableOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  AlterByDropPrimaryKeyContext : public AlterSpecificationContext {
  public:
    AlterByDropPrimaryKeyContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
  };

  class  AlterByLockContext : public AlterSpecificationContext {
  public:
    AlterByLockContext(AlterSpecificationContext *ctx);

    antlr4::Token *lockType = nullptr;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  AlterByDiscardPartitionContext : public AlterSpecificationContext {
  public:
    AlterByDiscardPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
  };

  class  AlterByDiscardTablespaceContext : public AlterSpecificationContext {
  public:
    AlterByDiscardTablespaceContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *TABLESPACE();
  };

  class  AlterByValidateContext : public AlterSpecificationContext {
  public:
    AlterByValidateContext(AlterSpecificationContext *ctx);

    antlr4::Token *validationFormat = nullptr;
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WITH();
  };

  class  AlterByAddPrimaryKeyContext : public AlterSpecificationContext {
  public:
    AlterByAddPrimaryKeyContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    MySqlParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
  };

  class  AlterByCheckPartitionContext : public AlterSpecificationContext {
  public:
    AlterByCheckPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
  };

  class  AlterByEnableKeysContext : public AlterSpecificationContext {
  public:
    AlterByEnableKeysContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *KEYS();
  };

  class  AlterByReorganizePartitionContext : public AlterSpecificationContext {
  public:
    AlterByReorganizePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  AlterBySetAlgorithmContext : public AlterSpecificationContext {
  public:
    AlterBySetAlgorithmContext(AlterSpecificationContext *ctx);

    antlr4::Token *algType = nullptr;
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
  };

  class  AlterByAnalyzePartitionContext : public AlterSpecificationContext {
  public:
    AlterByAnalyzePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
  };

  class  AlterByChangeColumnContext : public AlterSpecificationContext {
  public:
    AlterByChangeColumnContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *oldColumn = nullptr;
    MySqlParser::UidContext *newColumn = nullptr;
    MySqlParser::UidContext *afterColumn = nullptr;
    antlr4::tree::TerminalNode *CHANGE();
    ColumnDefinitionContext *columnDefinition();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
  };

  class  AlterByAddUniqueKeyContext : public AlterSpecificationContext {
  public:
    AlterByAddUniqueKeyContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::Token *indexFormat = nullptr;
    MySqlParser::UidContext *indexName = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNIQUE();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
  };

  class  AlterByTruncatePartitionContext : public AlterSpecificationContext {
  public:
    AlterByTruncatePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
  };

  class  AlterByDropIndexContext : public AlterSpecificationContext {
  public:
    AlterByDropIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
  };

  class  AlterByAddColumnContext : public AlterSpecificationContext {
  public:
    AlterByAddColumnContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    ColumnDefinitionContext *columnDefinition();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
  };

  class  AlterByOrderContext : public AlterSpecificationContext {
  public:
    AlterByOrderContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    UidListContext *uidList();
  };

  AlterSpecificationContext* alterSpecification();

  class  DropDatabaseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dbFormat = nullptr;
    DropDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    IfExistsContext *ifExists();

   
  };

  DropDatabaseContext* dropDatabase();

  class  DropEventContext : public antlr4::ParserRuleContext {
  public:
    DropEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

   
  };

  DropEventContext* dropEvent();

  class  DropIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *intimeAction = nullptr;
    antlr4::Token *algType = nullptr;
    antlr4::Token *lockType = nullptr;
    DropIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    UidContext *uid();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    std::vector<antlr4::tree::TerminalNode *> ALGORITHM();
    antlr4::tree::TerminalNode* ALGORITHM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCK();
    antlr4::tree::TerminalNode* LOCK(size_t i);
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INPLACE();
    antlr4::tree::TerminalNode* INPLACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COPY();
    antlr4::tree::TerminalNode* COPY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARED();
    antlr4::tree::TerminalNode* SHARED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCLUSIVE();
    antlr4::tree::TerminalNode* EXCLUSIVE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);

   
  };

  DropIndexContext* dropIndex();

  class  DropLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    DropLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    UidContext *uid();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    EngineNameContext *engineName();

   
  };

  DropLogfileGroupContext* dropLogfileGroup();

  class  DropProcedureContext : public antlr4::ParserRuleContext {
  public:
    DropProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PROCEDURE();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

   
  };

  DropProcedureContext* dropProcedure();

  class  DropFunctionContext : public antlr4::ParserRuleContext {
  public:
    DropFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FUNCTION();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

   
  };

  DropFunctionContext* dropFunction();

  class  DropServerContext : public antlr4::ParserRuleContext {
  public:
    DropServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVER();
    UidContext *uid();
    IfExistsContext *ifExists();

   
  };

  DropServerContext* dropServer();

  class  DropTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dropType = nullptr;
    DropTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

   
  };

  DropTableContext* dropTable();

  class  DropTablespaceContext : public antlr4::ParserRuleContext {
  public:
    DropTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();

   
  };

  DropTablespaceContext* dropTablespace();

  class  DropTriggerContext : public antlr4::ParserRuleContext {
  public:
    DropTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRIGGER();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

   
  };

  DropTriggerContext* dropTrigger();

  class  DropViewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dropType = nullptr;
    DropViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    IfExistsContext *ifExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

   
  };

  DropViewContext* dropView();

  class  RenameTableContext : public antlr4::ParserRuleContext {
  public:
    RenameTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<RenameTableClauseContext *> renameTableClause();
    RenameTableClauseContext* renameTableClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  RenameTableContext* renameTable();

  class  RenameTableClauseContext : public antlr4::ParserRuleContext {
  public:
    RenameTableClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    antlr4::tree::TerminalNode *TO();

   
  };

  RenameTableClauseContext* renameTableClause();

  class  TruncateTableContext : public antlr4::ParserRuleContext {
  public:
    TruncateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *TABLE();

   
  };

  TruncateTableContext* truncateTable();

  class  CallStatementContext : public antlr4::ParserRuleContext {
  public:
    CallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ConstantsContext *constants();
    ExpressionsContext *expressions();

   
  };

  CallStatementContext* callStatement();

  class  DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleDeleteStatementContext *singleDeleteStatement();
    MultipleDeleteStatementContext *multipleDeleteStatement();

   
  };

  DeleteStatementContext* deleteStatement();

  class  DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    ExpressionsContext *expressions();

   
  };

  DoStatementContext* doStatement();

  class  HandlerStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HandlerOpenStatementContext *handlerOpenStatement();
    HandlerReadIndexStatementContext *handlerReadIndexStatement();
    HandlerReadStatementContext *handlerReadStatement();
    HandlerCloseStatementContext *handlerCloseStatement();

   
  };

  HandlerStatementContext* handlerStatement();

  class  InsertStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;
    MySqlParser::UidListContext *partitions = nullptr;
    MySqlParser::UidListContext *columns = nullptr;
    MySqlParser::UpdatedElementContext *setFirst = nullptr;
    MySqlParser::UpdatedElementContext *updatedElementContext = nullptr;
    std::vector<UpdatedElementContext *> setElements;
    MySqlParser::UpdatedElementContext *duplicatedFirst = nullptr;
    std::vector<UpdatedElementContext *> duplicatedElements;
    InsertStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    TableNameContext *tableName();
    InsertStatementValueContext *insertStatementValue();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<UidListContext *> uidList();
    UidListContext* uidList(size_t i);

   
  };

  InsertStatementContext* insertStatement();

  class  LoadDataStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;
    antlr4::Token *filename = nullptr;
    antlr4::Token *violation = nullptr;
    MySqlParser::CharsetNameContext *charset = nullptr;
    antlr4::Token *fieldsFormat = nullptr;
    antlr4::Token *linesFormat = nullptr;
    LoadDataStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INFILE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    UidListContext *uidList();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *CHARACTER();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINES();
    antlr4::tree::TerminalNode* LINES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    DecimalLiteralContext *decimalLiteral();
    std::vector<AssignmentFieldContext *> assignmentField();
    AssignmentFieldContext* assignmentField(size_t i);
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *ROWS();
    std::vector<SelectFieldsIntoContext *> selectFieldsInto();
    SelectFieldsIntoContext* selectFieldsInto(size_t i);
    std::vector<SelectLinesIntoContext *> selectLinesInto();
    SelectLinesIntoContext* selectLinesInto(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  LoadDataStatementContext* loadDataStatement();

  class  LoadXmlStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;
    antlr4::Token *filename = nullptr;
    antlr4::Token *violation = nullptr;
    MySqlParser::CharsetNameContext *charset = nullptr;
    antlr4::Token *tag = nullptr;
    antlr4::Token *linesFormat = nullptr;
    LoadXmlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *INFILE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *CHARACTER();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROWS();
    antlr4::tree::TerminalNode* ROWS(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *GREATER_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<AssignmentFieldContext *> assignmentField();
    AssignmentFieldContext* assignmentField(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *LINES();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  LoadXmlStatementContext* loadXmlStatement();

  class  ReplaceStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;
    MySqlParser::UidListContext *partitions = nullptr;
    MySqlParser::UidListContext *columns = nullptr;
    MySqlParser::UpdatedElementContext *setFirst = nullptr;
    MySqlParser::UpdatedElementContext *updatedElementContext = nullptr;
    std::vector<UpdatedElementContext *> setElements;
    ReplaceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE();
    TableNameContext *tableName();
    InsertStatementValueContext *insertStatementValue();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    std::vector<UidListContext *> uidList();
    UidListContext* uidList(size_t i);
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  ReplaceStatementContext* replaceStatement();

  class  SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectStatementContext() = default;
    void copyFrom(SelectStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnionSelectContext : public SelectStatementContext {
  public:
    UnionSelectContext(SelectStatementContext *ctx);

    antlr4::Token *unionType = nullptr;
    QuerySpecificationNointoContext *querySpecificationNointo();
    std::vector<UnionStatementContext *> unionStatement();
    UnionStatementContext* unionStatement(size_t i);
    antlr4::tree::TerminalNode *UNION();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    LockClauseContext *lockClause();
    QuerySpecificationContext *querySpecification();
    QueryExpressionContext *queryExpression();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
  };

  class  UnionParenthesisSelectContext : public SelectStatementContext {
  public:
    UnionParenthesisSelectContext(SelectStatementContext *ctx);

    antlr4::Token *unionType = nullptr;
    QueryExpressionNointoContext *queryExpressionNointo();
    std::vector<UnionParenthesisContext *> unionParenthesis();
    UnionParenthesisContext* unionParenthesis(size_t i);
    antlr4::tree::TerminalNode *UNION();
    QueryExpressionContext *queryExpression();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    LockClauseContext *lockClause();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
  };

  class  SimpleSelectContext : public SelectStatementContext {
  public:
    SimpleSelectContext(SelectStatementContext *ctx);

    QuerySpecificationContext *querySpecification();
    LockClauseContext *lockClause();
  };

  class  ParenthesisSelectContext : public SelectStatementContext {
  public:
    ParenthesisSelectContext(SelectStatementContext *ctx);

    QueryExpressionContext *queryExpression();
    LockClauseContext *lockClause();
  };

  SelectStatementContext* selectStatement();

  class  UpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    UpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleUpdateStatementContext *singleUpdateStatement();
    MultipleUpdateStatementContext *multipleUpdateStatement();

   
  };

  UpdateStatementContext* updateStatement();

  class  InsertStatementValueContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *insertFormat = nullptr;
    InsertStatementValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();
    std::vector<ExpressionsWithDefaultsContext *> expressionsWithDefaults();
    ExpressionsWithDefaultsContext* expressionsWithDefaults(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  InsertStatementValueContext* insertStatementValue();

  class  UpdatedElementContext : public antlr4::ParserRuleContext {
  public:
    UpdatedElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullColumnNameContext *fullColumnName();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();

   
  };

  UpdatedElementContext* updatedElement();

  class  AssignmentFieldContext : public antlr4::ParserRuleContext {
  public:
    AssignmentFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *LOCAL_ID();

   
  };

  AssignmentFieldContext* assignmentField();

  class  LockClauseContext : public antlr4::ParserRuleContext {
  public:
    LockClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODE();

   
  };

  LockClauseContext* lockClause();

  class  SingleDeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;
    SingleDeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    OrderByClauseContext *orderByClause();
    antlr4::tree::TerminalNode *LIMIT();
    LimitClauseAtomContext *limitClauseAtom();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

   
  };

  SingleDeleteStatementContext* singleDeleteStatement();

  class  MultipleDeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;
    MultipleDeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    antlr4::tree::TerminalNode *FROM();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  MultipleDeleteStatementContext* multipleDeleteStatement();

  class  HandlerOpenStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerOpenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *OPEN();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();

   
  };

  HandlerOpenStatementContext* handlerOpenStatement();

  class  HandlerReadIndexStatementContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UidContext *index = nullptr;
    antlr4::Token *moveOrder = nullptr;
    HandlerReadIndexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *READ();
    UidContext *uid();
    ComparisonOperatorContext *comparisonOperator();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ConstantsContext *constants();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LIMIT();
    LimitClauseAtomContext *limitClauseAtom();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *PREV();
    antlr4::tree::TerminalNode *LAST();

   
  };

  HandlerReadIndexStatementContext* handlerReadIndexStatement();

  class  HandlerReadStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *moveOrder = nullptr;
    HandlerReadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LIMIT();
    LimitClauseAtomContext *limitClauseAtom();

   
  };

  HandlerReadStatementContext* handlerReadStatement();

  class  HandlerCloseStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerCloseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *CLOSE();

   
  };

  HandlerCloseStatementContext* handlerCloseStatement();

  class  SingleUpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;
    SingleUpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *SET();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    UidContext *uid();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *AS();

   
  };

  SingleUpdateStatementContext* singleUpdateStatement();

  class  MultipleUpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;
    MultipleUpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *SET();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

   
  };

  MultipleUpdateStatementContext* multipleUpdateStatement();

  class  OrderByClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<OrderByExpressionContext *> orderByExpression();
    OrderByExpressionContext* orderByExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  OrderByClauseContext* orderByClause();

  class  OrderByExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *order = nullptr;
    OrderByExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

   
  };

  OrderByExpressionContext* orderByExpression();

  class  TableSourcesContext : public antlr4::ParserRuleContext {
  public:
    TableSourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableSourceContext *> tableSource();
    TableSourceContext* tableSource(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  TableSourcesContext* tableSources();

  class  TableSourceContext : public antlr4::ParserRuleContext {
  public:
    TableSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableSourceContext() = default;
    void copyFrom(TableSourceContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableSourceNestedContext : public TableSourceContext {
  public:
    TableSourceNestedContext(TableSourceContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<JoinPartContext *> joinPart();
    JoinPartContext* joinPart(size_t i);
  };

  class  TableSourceBaseContext : public TableSourceContext {
  public:
    TableSourceBaseContext(TableSourceContext *ctx);

    TableSourceItemContext *tableSourceItem();
    std::vector<JoinPartContext *> joinPart();
    JoinPartContext* joinPart(size_t i);
  };

  TableSourceContext* tableSource();

  class  TableSourceItemContext : public antlr4::ParserRuleContext {
  public:
    TableSourceItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableSourceItemContext() = default;
    void copyFrom(TableSourceItemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubqueryTableItemContext : public TableSourceItemContext {
  public:
    SubqueryTableItemContext(TableSourceItemContext *ctx);

    MySqlParser::SelectStatementContext *parenthesisSubquery = nullptr;
    MySqlParser::UidContext *alias = nullptr;
    UidContext *uid();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AS();
  };

  class  AtomTableItemContext : public TableSourceItemContext {
  public:
    AtomTableItemContext(TableSourceItemContext *ctx);

    MySqlParser::UidContext *alias = nullptr;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<IndexHintContext *> indexHint();
    IndexHintContext* indexHint(size_t i);
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  TableSourcesItemContext : public TableSourceItemContext {
  public:
    TableSourcesItemContext(TableSourceItemContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  TableSourceItemContext* tableSourceItem();

  class  IndexHintContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *indexHintAction = nullptr;
    antlr4::Token *keyFormat = nullptr;
    IndexHintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *FOR();
    IndexHintTypeContext *indexHintType();

   
  };

  IndexHintContext* indexHint();

  class  IndexHintTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexHintTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *GROUP();

   
  };

  IndexHintTypeContext* indexHintType();

  class  JoinPartContext : public antlr4::ParserRuleContext {
  public:
    JoinPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    JoinPartContext() = default;
    void copyFrom(JoinPartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InnerJoinContext : public JoinPartContext {
  public:
    InnerJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *CROSS();
  };

  class  NaturalJoinContext : public JoinPartContext {
  public:
    NaturalJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *OUTER();
  };

  class  OuterJoinContext : public JoinPartContext {
  public:
    OuterJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *OUTER();
  };

  class  StraightJoinContext : public JoinPartContext {
  public:
    StraightJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *STRAIGHT_JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
  };

  JoinPartContext* joinPart();

  class  QueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    QuerySpecificationContext *querySpecification();
    antlr4::tree::TerminalNode *RR_BRACKET();
    QueryExpressionContext *queryExpression();

   
  };

  QueryExpressionContext* queryExpression();

  class  QueryExpressionNointoContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionNointoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    QuerySpecificationNointoContext *querySpecificationNointo();
    antlr4::tree::TerminalNode *RR_BRACKET();
    QueryExpressionNointoContext *queryExpressionNointo();

   
  };

  QueryExpressionNointoContext* queryExpressionNointo();

  class  QuerySpecificationContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    SelectElementsContext *selectElements();
    std::vector<SelectSpecContext *> selectSpec();
    SelectSpecContext* selectSpec(size_t i);
    SelectIntoExpressionContext *selectIntoExpression();
    FromClauseContext *fromClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

   
  };

  QuerySpecificationContext* querySpecification();

  class  QuerySpecificationNointoContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationNointoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    SelectElementsContext *selectElements();
    std::vector<SelectSpecContext *> selectSpec();
    SelectSpecContext* selectSpec(size_t i);
    FromClauseContext *fromClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

   
  };

  QuerySpecificationNointoContext* querySpecificationNointo();

  class  UnionParenthesisContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *unionType = nullptr;
    UnionParenthesisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    QueryExpressionNointoContext *queryExpressionNointo();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

   
  };

  UnionParenthesisContext* unionParenthesis();

  class  UnionStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *unionType = nullptr;
    UnionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    QuerySpecificationNointoContext *querySpecificationNointo();
    QueryExpressionNointoContext *queryExpressionNointo();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

   
  };

  UnionStatementContext* unionStatement();

  class  SelectSpecContext : public antlr4::ParserRuleContext {
  public:
    SelectSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTINCTROW();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN();
    antlr4::tree::TerminalNode *SQL_SMALL_RESULT();
    antlr4::tree::TerminalNode *SQL_BIG_RESULT();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT();
    antlr4::tree::TerminalNode *SQL_CACHE();
    antlr4::tree::TerminalNode *SQL_NO_CACHE();
    antlr4::tree::TerminalNode *SQL_CALC_FOUND_ROWS();

   
  };

  SelectSpecContext* selectSpec();

  class  SelectElementsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *star = nullptr;
    SelectElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectElementContext *> selectElement();
    SelectElementContext* selectElement(size_t i);
    antlr4::tree::TerminalNode *STAR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  SelectElementsContext* selectElements();

  class  SelectElementContext : public antlr4::ParserRuleContext {
  public:
    SelectElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectElementContext() = default;
    void copyFrom(SelectElementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelectExpressionElementContext : public SelectElementContext {
  public:
    SelectExpressionElementContext(SelectElementContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *VAR_ASSIGN();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
  };

  class  SelectFunctionElementContext : public SelectElementContext {
  public:
    SelectFunctionElementContext(SelectElementContext *ctx);

    FunctionCallContext *functionCall();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
  };

  class  SelectStarElementContext : public SelectElementContext {
  public:
    SelectStarElementContext(SelectElementContext *ctx);

    FullIdContext *fullId();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *STAR();
  };

  class  SelectColumnElementContext : public SelectElementContext {
  public:
    SelectColumnElementContext(SelectElementContext *ctx);

    FullColumnNameContext *fullColumnName();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
  };

  SelectElementContext* selectElement();

  class  SelectIntoExpressionContext : public antlr4::ParserRuleContext {
  public:
    SelectIntoExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectIntoExpressionContext() = default;
    void copyFrom(SelectIntoExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelectIntoVariablesContext : public SelectIntoExpressionContext {
  public:
    SelectIntoVariablesContext(SelectIntoExpressionContext *ctx);

    antlr4::tree::TerminalNode *INTO();
    std::vector<AssignmentFieldContext *> assignmentField();
    AssignmentFieldContext* assignmentField(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  SelectIntoTextFileContext : public SelectIntoExpressionContext {
  public:
    SelectIntoTextFileContext(SelectIntoExpressionContext *ctx);

    antlr4::Token *filename = nullptr;
    MySqlParser::CharsetNameContext *charset = nullptr;
    antlr4::Token *fieldsFormat = nullptr;
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *OUTFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LINES();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *COLUMNS();
    std::vector<SelectFieldsIntoContext *> selectFieldsInto();
    SelectFieldsIntoContext* selectFieldsInto(size_t i);
    std::vector<SelectLinesIntoContext *> selectLinesInto();
    SelectLinesIntoContext* selectLinesInto(size_t i);
  };

  class  SelectIntoDumpFileContext : public SelectIntoExpressionContext {
  public:
    SelectIntoDumpFileContext(SelectIntoExpressionContext *ctx);

    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *DUMPFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  SelectIntoExpressionContext* selectIntoExpression();

  class  SelectFieldsIntoContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *terminationField = nullptr;
    antlr4::Token *enclosion = nullptr;
    antlr4::Token *escaping = nullptr;
    SelectFieldsIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENCLOSED();
    antlr4::tree::TerminalNode *OPTIONALLY();
    antlr4::tree::TerminalNode *ESCAPED();

   
  };

  SelectFieldsIntoContext* selectFieldsInto();

  class  SelectLinesIntoContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *starting = nullptr;
    antlr4::Token *terminationLine = nullptr;
    SelectLinesIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *TERMINATED();

   
  };

  SelectLinesIntoContext* selectLinesInto();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::ExpressionContext *whereExpr = nullptr;
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

   
  };

  FromClauseContext* fromClause();

  class  GroupByClauseContext : public antlr4::ParserRuleContext {
  public:
    GroupByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<GroupByItemContext *> groupByItem();
    GroupByItemContext* groupByItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ROLLUP();

   
  };

  GroupByClauseContext* groupByClause();

  class  HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::ExpressionContext *havingExpr = nullptr;
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    ExpressionContext *expression();

   
  };

  HavingClauseContext* havingClause();

  class  GroupByItemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *order = nullptr;
    GroupByItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

   
  };

  GroupByItemContext* groupByItem();

  class  LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::LimitClauseAtomContext *offset = nullptr;
    MySqlParser::LimitClauseAtomContext *limit = nullptr;
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *OFFSET();
    std::vector<LimitClauseAtomContext *> limitClauseAtom();
    LimitClauseAtomContext* limitClauseAtom(size_t i);
    antlr4::tree::TerminalNode *COMMA();

   
  };

  LimitClauseContext* limitClause();

  class  LimitClauseAtomContext : public antlr4::ParserRuleContext {
  public:
    LimitClauseAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalLiteralContext *decimalLiteral();
    MysqlVariableContext *mysqlVariable();
    SimpleIdContext *simpleId();

   
  };

  LimitClauseAtomContext* limitClauseAtom();

  class  StartTransactionContext : public antlr4::ParserRuleContext {
  public:
    StartTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<TransactionModeContext *> transactionMode();
    TransactionModeContext* transactionMode(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  StartTransactionContext* startTransaction();

  class  BeginWorkContext : public antlr4::ParserRuleContext {
  public:
    BeginWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *WORK();

   
  };

  BeginWorkContext* beginWork();

  class  CommitWorkContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nochain = nullptr;
    antlr4::Token *norelease = nullptr;
    CommitWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *RELEASE();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);

   
  };

  CommitWorkContext* commitWork();

  class  RollbackWorkContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nochain = nullptr;
    antlr4::Token *norelease = nullptr;
    RollbackWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *RELEASE();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);

   
  };

  RollbackWorkContext* rollbackWork();

  class  SavepointStatementContext : public antlr4::ParserRuleContext {
  public:
    SavepointStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPOINT();
    UidContext *uid();

   
  };

  SavepointStatementContext* savepointStatement();

  class  RollbackStatementContext : public antlr4::ParserRuleContext {
  public:
    RollbackStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *TO();
    UidContext *uid();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *SAVEPOINT();

   
  };

  RollbackStatementContext* rollbackStatement();

  class  ReleaseStatementContext : public antlr4::ParserRuleContext {
  public:
    ReleaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *SAVEPOINT();
    UidContext *uid();

   
  };

  ReleaseStatementContext* releaseStatement();

  class  LockTablesContext : public antlr4::ParserRuleContext {
  public:
    LockTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *TABLES();
    std::vector<LockTableElementContext *> lockTableElement();
    LockTableElementContext* lockTableElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  LockTablesContext* lockTables();

  class  UnlockTablesContext : public antlr4::ParserRuleContext {
  public:
    UnlockTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *TABLES();

   
  };

  UnlockTablesContext* unlockTables();

  class  SetAutocommitStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *autocommitValue = nullptr;
    SetAutocommitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *AUTOCOMMIT();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();

   
  };

  SetAutocommitStatementContext* setAutocommitStatement();

  class  SetTransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *transactionContext = nullptr;
    SetTransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<TransactionOptionContext *> transactionOption();
    TransactionOptionContext* transactionOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

   
  };

  SetTransactionStatementContext* setTransactionStatement();

  class  TransactionModeContext : public antlr4::ParserRuleContext {
  public:
    TransactionModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();

   
  };

  TransactionModeContext* transactionMode();

  class  LockTableElementContext : public antlr4::ParserRuleContext {
  public:
    LockTableElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    LockActionContext *lockAction();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();

   
  };

  LockTableElementContext* lockTableElement();

  class  LockActionContext : public antlr4::ParserRuleContext {
  public:
    LockActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

   
  };

  LockActionContext* lockAction();

  class  TransactionOptionContext : public antlr4::ParserRuleContext {
  public:
    TransactionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    TransactionLevelContext *transactionLevel();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();

   
  };

  TransactionOptionContext* transactionOption();

  class  TransactionLevelContext : public antlr4::ParserRuleContext {
  public:
    TransactionLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *SERIALIZABLE();

   
  };

  TransactionLevelContext* transactionLevel();

  class  ChangeMasterContext : public antlr4::ParserRuleContext {
  public:
    ChangeMasterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    std::vector<MasterOptionContext *> masterOption();
    MasterOptionContext* masterOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ChannelOptionContext *channelOption();

   
  };

  ChangeMasterContext* changeMaster();

  class  ChangeReplicationFilterContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *FILTER();
    std::vector<ReplicationFilterContext *> replicationFilter();
    ReplicationFilterContext* replicationFilter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  ChangeReplicationFilterContext* changeReplicationFilter();

  class  PurgeBinaryLogsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *purgeFormat = nullptr;
    antlr4::Token *fileName = nullptr;
    antlr4::Token *timeValue = nullptr;
    PurgeBinaryLogsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  PurgeBinaryLogsContext* purgeBinaryLogs();

  class  ResetMasterContext : public antlr4::ParserRuleContext {
  public:
    ResetMasterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *MASTER();

   
  };

  ResetMasterContext* resetMaster();

  class  ResetSlaveContext : public antlr4::ParserRuleContext {
  public:
    ResetSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *ALL();
    ChannelOptionContext *channelOption();

   
  };

  ResetSlaveContext* resetSlave();

  class  StartSlaveContext : public antlr4::ParserRuleContext {
  public:
    StartSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *SLAVE();
    std::vector<ThreadTypeContext *> threadType();
    ThreadTypeContext* threadType(size_t i);
    antlr4::tree::TerminalNode *UNTIL();
    UntilOptionContext *untilOption();
    std::vector<ConnectionOptionContext *> connectionOption();
    ConnectionOptionContext* connectionOption(size_t i);
    ChannelOptionContext *channelOption();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  StartSlaveContext* startSlave();

  class  StopSlaveContext : public antlr4::ParserRuleContext {
  public:
    StopSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *SLAVE();
    std::vector<ThreadTypeContext *> threadType();
    ThreadTypeContext* threadType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  StopSlaveContext* stopSlave();

  class  StartGroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    StartGroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();

   
  };

  StartGroupReplicationContext* startGroupReplication();

  class  StopGroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    StopGroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();

   
  };

  StopGroupReplicationContext* stopGroupReplication();

  class  MasterOptionContext : public antlr4::ParserRuleContext {
  public:
    MasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MasterOptionContext() = default;
    void copyFrom(MasterOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MasterStringOptionContext : public MasterOptionContext {
  public:
    MasterStringOptionContext(MasterOptionContext *ctx);

    StringMasterOptionContext *stringMasterOption();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  class  MasterRealOptionContext : public MasterOptionContext {
  public:
    MasterRealOptionContext(MasterOptionContext *ctx);

    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *REAL_LITERAL();
  };

  class  MasterBoolOptionContext : public MasterOptionContext {
  public:
    MasterBoolOptionContext(MasterOptionContext *ctx);

    antlr4::Token *boolVal = nullptr;
    BoolMasterOptionContext *boolMasterOption();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
  };

  class  MasterUidListOptionContext : public MasterOptionContext {
  public:
    MasterUidListOptionContext(MasterOptionContext *ctx);

    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  MasterDecimalOptionContext : public MasterOptionContext {
  public:
    MasterDecimalOptionContext(MasterOptionContext *ctx);

    DecimalMasterOptionContext *decimalMasterOption();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    DecimalLiteralContext *decimalLiteral();
  };

  MasterOptionContext* masterOption();

  class  StringMasterOptionContext : public antlr4::ParserRuleContext {
  public:
    StringMasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_BIND();
    antlr4::tree::TerminalNode *MASTER_HOST();
    antlr4::tree::TerminalNode *MASTER_USER();
    antlr4::tree::TerminalNode *MASTER_PASSWORD();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *MASTER_SSL_CA();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION();

   
  };

  StringMasterOptionContext* stringMasterOption();

  class  DecimalMasterOptionContext : public antlr4::ParserRuleContext {
  public:
    DecimalMasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PORT();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT();
    antlr4::tree::TerminalNode *MASTER_DELAY();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();

   
  };

  DecimalMasterOptionContext* decimalMasterOption();

  class  BoolMasterOptionContext : public antlr4::ParserRuleContext {
  public:
    BoolMasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION();
    antlr4::tree::TerminalNode *MASTER_SSL();
    antlr4::tree::TerminalNode *MASTER_SSL_VERIFY_SERVER_CERT();

   
  };

  BoolMasterOptionContext* boolMasterOption();

  class  ChannelOptionContext : public antlr4::ParserRuleContext {
  public:
    ChannelOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  ChannelOptionContext* channelOption();

  class  ReplicationFilterContext : public antlr4::ParserRuleContext {
  public:
    ReplicationFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ReplicationFilterContext() = default;
    void copyFrom(ReplicationFilterContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WildIgnoreTableReplicationContext : public ReplicationFilterContext {
  public:
    WildIgnoreTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SimpleStringsContext *simpleStrings();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  DoTableReplicationContext : public ReplicationFilterContext {
  public:
    DoTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    TablesContext *tables();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  IgnoreTableReplicationContext : public ReplicationFilterContext {
  public:
    IgnoreTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    TablesContext *tables();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  RewriteDbReplicationContext : public ReplicationFilterContext {
  public:
    RewriteDbReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<TablePairContext *> tablePair();
    TablePairContext* tablePair(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  DoDbReplicationContext : public ReplicationFilterContext {
  public:
    DoDbReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_DO_DB();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  IgnoreDbReplicationContext : public ReplicationFilterContext {
  public:
    IgnoreDbReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  WildDoTableReplicationContext : public ReplicationFilterContext {
  public:
    WildDoTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SimpleStringsContext *simpleStrings();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  ReplicationFilterContext* replicationFilter();

  class  TablePairContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::TableNameContext *firstTable = nullptr;
    MySqlParser::TableNameContext *secondTable = nullptr;
    TablePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);

   
  };

  TablePairContext* tablePair();

  class  ThreadTypeContext : public antlr4::ParserRuleContext {
  public:
    ThreadTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IO_THREAD();
    antlr4::tree::TerminalNode *SQL_THREAD();

   
  };

  ThreadTypeContext* threadType();

  class  UntilOptionContext : public antlr4::ParserRuleContext {
  public:
    UntilOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UntilOptionContext() = default;
    void copyFrom(UntilOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GtidsUntilOptionContext : public UntilOptionContext {
  public:
    GtidsUntilOptionContext(UntilOptionContext *ctx);

    antlr4::Token *gtids = nullptr;
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    GtuidSetContext *gtuidSet();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS();
  };

  class  SqlGapsUntilOptionContext : public UntilOptionContext {
  public:
    SqlGapsUntilOptionContext(UntilOptionContext *ctx);

    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS();
  };

  class  MasterLogUntilOptionContext : public UntilOptionContext {
  public:
    MasterLogUntilOptionContext(UntilOptionContext *ctx);

    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    DecimalLiteralContext *decimalLiteral();
  };

  class  RelayLogUntilOptionContext : public UntilOptionContext {
  public:
    RelayLogUntilOptionContext(UntilOptionContext *ctx);

    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    DecimalLiteralContext *decimalLiteral();
  };

  UntilOptionContext* untilOption();

  class  ConnectionOptionContext : public antlr4::ParserRuleContext {
  public:
    ConnectionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConnectionOptionContext() = default;
    void copyFrom(ConnectionOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PluginDirConnectionOptionContext : public ConnectionOptionContext {
  public:
    PluginDirConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptPluginDir = nullptr;
    antlr4::tree::TerminalNode *PLUGIN_DIR();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  class  UserConnectionOptionContext : public ConnectionOptionContext {
  public:
    UserConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptUser = nullptr;
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  class  DefaultAuthConnectionOptionContext : public ConnectionOptionContext {
  public:
    DefaultAuthConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptDefAuth = nullptr;
    antlr4::tree::TerminalNode *DEFAULT_AUTH();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  class  PasswordConnectionOptionContext : public ConnectionOptionContext {
  public:
    PasswordConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptPassword = nullptr;
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  ConnectionOptionContext* connectionOption();

  class  GtuidSetContext : public antlr4::ParserRuleContext {
  public:
    GtuidSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UuidSetContext *> uuidSet();
    UuidSetContext* uuidSet(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  GtuidSetContext* gtuidSet();

  class  XaStartTransactionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *xaStart = nullptr;
    antlr4::Token *xaAction = nullptr;
    XaStartTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    XidContext *xid();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *RESUME();

   
  };

  XaStartTransactionContext* xaStartTransaction();

  class  XaEndTransactionContext : public antlr4::ParserRuleContext {
  public:
    XaEndTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *END();
    XidContext *xid();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *MIGRATE();

   
  };

  XaEndTransactionContext* xaEndTransaction();

  class  XaPrepareStatementContext : public antlr4::ParserRuleContext {
  public:
    XaPrepareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *PREPARE();
    XidContext *xid();

   
  };

  XaPrepareStatementContext* xaPrepareStatement();

  class  XaCommitWorkContext : public antlr4::ParserRuleContext {
  public:
    XaCommitWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *COMMIT();
    XidContext *xid();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *PHASE();

   
  };

  XaCommitWorkContext* xaCommitWork();

  class  XaRollbackWorkContext : public antlr4::ParserRuleContext {
  public:
    XaRollbackWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *ROLLBACK();
    XidContext *xid();

   
  };

  XaRollbackWorkContext* xaRollbackWork();

  class  XaRecoverWorkContext : public antlr4::ParserRuleContext {
  public:
    XaRecoverWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *CONVERT();
    XidContext *xid();

   
  };

  XaRecoverWorkContext* xaRecoverWork();

  class  PrepareStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *query = nullptr;
    antlr4::Token *variable = nullptr;
    PrepareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LOCAL_ID();

   
  };

  PrepareStatementContext* prepareStatement();

  class  ExecuteStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecuteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    UidContext *uid();
    antlr4::tree::TerminalNode *USING();
    UserVariablesContext *userVariables();

   
  };

  ExecuteStatementContext* executeStatement();

  class  DeallocatePrepareContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dropFormat = nullptr;
    DeallocatePrepareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DROP();

   
  };

  DeallocatePrepareContext* deallocatePrepare();

  class  RoutineBodyContext : public antlr4::ParserRuleContext {
  public:
    RoutineBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockStatementContext *blockStatement();
    SqlStatementContext *sqlStatement();

   
  };

  RoutineBodyContext* routineBody();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLON_SYMB();
    std::vector<DeclareVariableContext *> declareVariable();
    DeclareVariableContext* declareVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<DeclareConditionContext *> declareCondition();
    DeclareConditionContext* declareCondition(size_t i);
    std::vector<DeclareCursorContext *> declareCursor();
    DeclareCursorContext* declareCursor(size_t i);
    std::vector<DeclareHandlerContext *> declareHandler();
    DeclareHandlerContext* declareHandler(size_t i);
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

   
  };

  BlockStatementContext* blockStatement();

  class  CaseStatementContext : public antlr4::ParserRuleContext {
  public:
    CaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    antlr4::tree::TerminalNode *END();
    UidContext *uid();
    ExpressionContext *expression();
    std::vector<CaseAlternativeContext *> caseAlternative();
    CaseAlternativeContext* caseAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

   
  };

  CaseStatementContext* caseStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::ProcedureSqlStatementContext *procedureSqlStatementContext = nullptr;
    std::vector<ProcedureSqlStatementContext *> thenStatements;
    std::vector<ProcedureSqlStatementContext *> elseStatements;
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *END();
    std::vector<ElifAlternativeContext *> elifAlternative();
    ElifAlternativeContext* elifAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

   
  };

  IfStatementContext* ifStatement();

  class  IterateStatementContext : public antlr4::ParserRuleContext {
  public:
    IterateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ITERATE();
    UidContext *uid();

   
  };

  IterateStatementContext* iterateStatement();

  class  LeaveStatementContext : public antlr4::ParserRuleContext {
  public:
    LeaveStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE();
    UidContext *uid();

   
  };

  LeaveStatementContext* leaveStatement();

  class  LoopStatementContext : public antlr4::ParserRuleContext {
  public:
    LoopStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP();
    antlr4::tree::TerminalNode* LOOP(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLON_SYMB();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

   
  };

  LoopStatementContext* loopStatement();

  class  RepeatStatementContext : public antlr4::ParserRuleContext {
  public:
    RepeatStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> REPEAT();
    antlr4::tree::TerminalNode* REPEAT(size_t i);
    antlr4::tree::TerminalNode *UNTIL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLON_SYMB();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

   
  };

  RepeatStatementContext* repeatStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

   
  };

  ReturnStatementContext* returnStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE();
    antlr4::tree::TerminalNode* WHILE(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLON_SYMB();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

   
  };

  WhileStatementContext* whileStatement();

  class  CursorStatementContext : public antlr4::ParserRuleContext {
  public:
    CursorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CursorStatementContext() = default;
    void copyFrom(CursorStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CloseCursorContext : public CursorStatementContext {
  public:
    CloseCursorContext(CursorStatementContext *ctx);

    antlr4::tree::TerminalNode *CLOSE();
    UidContext *uid();
  };

  class  OpenCursorContext : public CursorStatementContext {
  public:
    OpenCursorContext(CursorStatementContext *ctx);

    antlr4::tree::TerminalNode *OPEN();
    UidContext *uid();
  };

  class  FetchCursorContext : public CursorStatementContext {
  public:
    FetchCursorContext(CursorStatementContext *ctx);

    antlr4::tree::TerminalNode *FETCH();
    UidContext *uid();
    antlr4::tree::TerminalNode *INTO();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *NEXT();
  };

  CursorStatementContext* cursorStatement();

  class  DeclareVariableContext : public antlr4::ParserRuleContext {
  public:
    DeclareVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    UidListContext *uidList();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *DEFAULT();
    ExpressionContext *expression();

   
  };

  DeclareVariableContext* declareVariable();

  class  DeclareConditionContext : public antlr4::ParserRuleContext {
  public:
    DeclareConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *FOR();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *VALUE();

   
  };

  DeclareConditionContext* declareCondition();

  class  DeclareCursorContext : public antlr4::ParserRuleContext {
  public:
    DeclareCursorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *FOR();
    SelectStatementContext *selectStatement();

   
  };

  DeclareCursorContext* declareCursor();

  class  DeclareHandlerContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *handlerAction = nullptr;
    DeclareHandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *FOR();
    std::vector<HandlerConditionValueContext *> handlerConditionValue();
    HandlerConditionValueContext* handlerConditionValue(size_t i);
    RoutineBodyContext *routineBody();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *UNDO();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  DeclareHandlerContext* declareHandler();

  class  HandlerConditionValueContext : public antlr4::ParserRuleContext {
  public:
    HandlerConditionValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    HandlerConditionValueContext() = default;
    void copyFrom(HandlerConditionValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  HandlerConditionWarningContext : public HandlerConditionValueContext {
  public:
    HandlerConditionWarningContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *SQLWARNING();
  };

  class  HandlerConditionCodeContext : public HandlerConditionValueContext {
  public:
    HandlerConditionCodeContext(HandlerConditionValueContext *ctx);

    DecimalLiteralContext *decimalLiteral();
  };

  class  HandlerConditionNotfoundContext : public HandlerConditionValueContext {
  public:
    HandlerConditionNotfoundContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOUND();
  };

  class  HandlerConditionStateContext : public HandlerConditionValueContext {
  public:
    HandlerConditionStateContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *VALUE();
  };

  class  HandlerConditionExceptionContext : public HandlerConditionValueContext {
  public:
    HandlerConditionExceptionContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *SQLEXCEPTION();
  };

  class  HandlerConditionNameContext : public HandlerConditionValueContext {
  public:
    HandlerConditionNameContext(HandlerConditionValueContext *ctx);

    UidContext *uid();
  };

  HandlerConditionValueContext* handlerConditionValue();

  class  ProcedureSqlStatementContext : public antlr4::ParserRuleContext {
  public:
    ProcedureSqlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    CompoundStatementContext *compoundStatement();
    SqlStatementContext *sqlStatement();

   
  };

  ProcedureSqlStatementContext* procedureSqlStatement();

  class  CaseAlternativeContext : public antlr4::ParserRuleContext {
  public:
    CaseAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    ConstantContext *constant();
    ExpressionContext *expression();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

   
  };

  CaseAlternativeContext* caseAlternative();

  class  ElifAlternativeContext : public antlr4::ParserRuleContext {
  public:
    ElifAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSEIF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

   
  };

  ElifAlternativeContext* elifAlternative();

  class  AlterUserContext : public antlr4::ParserRuleContext {
  public:
    AlterUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterUserContext() = default;
    void copyFrom(AlterUserContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterUserMysqlV56Context : public AlterUserContext {
  public:
    AlterUserMysqlV56Context(AlterUserContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserSpecificationContext *> userSpecification();
    UserSpecificationContext* userSpecification(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  AlterUserMysqlV57Context : public AlterUserContext {
  public:
    AlterUserMysqlV57Context(AlterUserContext *ctx);

    antlr4::Token *tlsNone = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    IfExistsContext *ifExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<UserPasswordOptionContext *> userPasswordOption();
    UserPasswordOptionContext* userPasswordOption(size_t i);
    std::vector<UserLockOptionContext *> userLockOption();
    UserLockOptionContext* userLockOption(size_t i);
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<UserResourceOptionContext *> userResourceOption();
    UserResourceOptionContext* userResourceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
  };

  AlterUserContext* alterUser();

  class  CreateUserContext : public antlr4::ParserRuleContext {
  public:
    CreateUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateUserContext() = default;
    void copyFrom(CreateUserContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CreateUserMysqlV57Context : public CreateUserContext {
  public:
    CreateUserMysqlV57Context(CreateUserContext *ctx);

    antlr4::Token *tlsNone = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    IfNotExistsContext *ifNotExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<UserPasswordOptionContext *> userPasswordOption();
    UserPasswordOptionContext* userPasswordOption(size_t i);
    std::vector<UserLockOptionContext *> userLockOption();
    UserLockOptionContext* userLockOption(size_t i);
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<UserResourceOptionContext *> userResourceOption();
    UserResourceOptionContext* userResourceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
  };

  class  CreateUserMysqlV56Context : public CreateUserContext {
  public:
    CreateUserMysqlV56Context(CreateUserContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  CreateUserContext* createUser();

  class  DropUserContext : public antlr4::ParserRuleContext {
  public:
    DropUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    IfExistsContext *ifExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  DropUserContext* dropUser();

  class  GrantStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *privilegeObject = nullptr;
    antlr4::Token *tlsNone = nullptr;
    GrantStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    std::vector<PrivelegeClauseContext *> privelegeClause();
    PrivelegeClauseContext* privelegeClause(size_t i);
    antlr4::tree::TerminalNode *ON();
    PrivilegeLevelContext *privilegeLevel();
    antlr4::tree::TerminalNode *TO();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<antlr4::tree::TerminalNode *> OPTION();
    antlr4::tree::TerminalNode* OPTION(size_t i);
    std::vector<UserResourceOptionContext *> userResourceOption();
    UserResourceOptionContext* userResourceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    antlr4::tree::TerminalNode *ADMIN();

   
  };

  GrantStatementContext* grantStatement();

  class  GrantProxyContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UserNameContext *fromFirst = nullptr;
    MySqlParser::UserNameContext *toFirst = nullptr;
    MySqlParser::UserNameContext *userNameContext = nullptr;
    std::vector<UserNameContext *> toOther;
    GrantProxyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TO();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTION();

   
  };

  GrantProxyContext* grantProxy();

  class  RenameUserContext : public antlr4::ParserRuleContext {
  public:
    RenameUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *USER();
    std::vector<RenameUserClauseContext *> renameUserClause();
    RenameUserClauseContext* renameUserClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  RenameUserContext* renameUser();

  class  RevokeStatementContext : public antlr4::ParserRuleContext {
  public:
    RevokeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RevokeStatementContext() = default;
    void copyFrom(RevokeStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DetailRevokeContext : public RevokeStatementContext {
  public:
    DetailRevokeContext(RevokeStatementContext *ctx);

    antlr4::Token *privilegeObject = nullptr;
    antlr4::tree::TerminalNode *REVOKE();
    std::vector<PrivelegeClauseContext *> privelegeClause();
    PrivelegeClauseContext* privelegeClause(size_t i);
    antlr4::tree::TerminalNode *ON();
    PrivilegeLevelContext *privilegeLevel();
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
  };

  class  RoleRevokeContext : public RevokeStatementContext {
  public:
    RoleRevokeContext(RevokeStatementContext *ctx);

    antlr4::tree::TerminalNode *REVOKE();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  ShortRevokeContext : public RevokeStatementContext {
  public:
    ShortRevokeContext(RevokeStatementContext *ctx);

    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    antlr4::tree::TerminalNode *PRIVILEGES();
  };

  RevokeStatementContext* revokeStatement();

  class  RevokeProxyContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UserNameContext *onUser = nullptr;
    MySqlParser::UserNameContext *fromFirst = nullptr;
    MySqlParser::UserNameContext *userNameContext = nullptr;
    std::vector<UserNameContext *> fromOther;
    RevokeProxyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  RevokeProxyContext* revokeProxy();

  class  SetPasswordStatementContext : public antlr4::ParserRuleContext {
  public:
    SetPasswordStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    PasswordFunctionClauseContext *passwordFunctionClause();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FOR();
    UserNameContext *userName();

   
  };

  SetPasswordStatementContext* setPasswordStatement();

  class  UserSpecificationContext : public antlr4::ParserRuleContext {
  public:
    UserSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserNameContext *userName();
    UserPasswordOptionContext *userPasswordOption();

   
  };

  UserSpecificationContext* userSpecification();

  class  UserAuthOptionContext : public antlr4::ParserRuleContext {
  public:
    UserAuthOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UserAuthOptionContext() = default;
    void copyFrom(UserAuthOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleAuthOptionContext : public UserAuthOptionContext {
  public:
    SimpleAuthOptionContext(UserAuthOptionContext *ctx);

    UserNameContext *userName();
  };

  class  PasswordAuthOptionContext : public UserAuthOptionContext {
  public:
    PasswordAuthOptionContext(UserAuthOptionContext *ctx);

    antlr4::Token *hashed = nullptr;
    UserNameContext *userName();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  class  StringAuthOptionContext : public UserAuthOptionContext {
  public:
    StringAuthOptionContext(UserAuthOptionContext *ctx);

    UserNameContext *userName();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *WITH();
    AuthPluginContext *authPlugin();
  };

  class  HashAuthOptionContext : public UserAuthOptionContext {
  public:
    HashAuthOptionContext(UserAuthOptionContext *ctx);

    UserNameContext *userName();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *WITH();
    AuthPluginContext *authPlugin();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  UserAuthOptionContext* userAuthOption();

  class  TlsOptionContext : public antlr4::ParserRuleContext {
  public:
    TlsOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SSL();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *SUBJECT();

   
  };

  TlsOptionContext* tlsOption();

  class  UserResourceOptionContext : public antlr4::ParserRuleContext {
  public:
    UserResourceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();

   
  };

  UserResourceOptionContext* userResourceOption();

  class  UserPasswordOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *expireType = nullptr;
    UserPasswordOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EXPIRE();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NEVER();
    antlr4::tree::TerminalNode *INTERVAL();

   
  };

  UserPasswordOptionContext* userPasswordOption();

  class  UserLockOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *lockType = nullptr;
    UserLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *UNLOCK();

   
  };

  UserLockOptionContext* userLockOption();

  class  PrivelegeClauseContext : public antlr4::ParserRuleContext {
  public:
    PrivelegeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivilegeContext *privilege();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();

   
  };

  PrivelegeClauseContext* privelegeClause();

  class  PrivilegeContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *APPLICATION_PASSWORD_ADMIN();
    antlr4::tree::TerminalNode *AUDIT_ADMIN();
    antlr4::tree::TerminalNode *BACKUP_ADMIN();
    antlr4::tree::TerminalNode *BINLOG_ADMIN();
    antlr4::tree::TerminalNode *BINLOG_ENCRYPTION_ADMIN();
    antlr4::tree::TerminalNode *CLONE_ADMIN();
    antlr4::tree::TerminalNode *CONNECTION_ADMIN();
    antlr4::tree::TerminalNode *ENCRYPTION_KEY_ADMIN();
    antlr4::tree::TerminalNode *FIREWALL_ADMIN();
    antlr4::tree::TerminalNode *FIREWALL_USER();
    antlr4::tree::TerminalNode *FLUSH_OPTIMIZER_COSTS();
    antlr4::tree::TerminalNode *FLUSH_STATUS();
    antlr4::tree::TerminalNode *FLUSH_TABLES();
    antlr4::tree::TerminalNode *FLUSH_USER_RESOURCES();
    antlr4::tree::TerminalNode *GROUP_REPLICATION_ADMIN();
    antlr4::tree::TerminalNode *INNODB_REDO_LOG_ARCHIVE();
    antlr4::tree::TerminalNode *INNODB_REDO_LOG_ENABLE();
    antlr4::tree::TerminalNode *NDB_STORED_USER();
    antlr4::tree::TerminalNode *PERSIST_RO_VARIABLES_ADMIN();
    antlr4::tree::TerminalNode *REPLICATION_APPLIER();
    antlr4::tree::TerminalNode *REPLICATION_SLAVE_ADMIN();
    antlr4::tree::TerminalNode *RESOURCE_GROUP_ADMIN();
    antlr4::tree::TerminalNode *RESOURCE_GROUP_USER();
    antlr4::tree::TerminalNode *ROLE_ADMIN();
    antlr4::tree::TerminalNode *SERVICE_CONNECTION_ADMIN();
    antlr4::tree::TerminalNode *SESSION_VARIABLES_ADMIN();
    antlr4::tree::TerminalNode *SET_USER_ID();
    antlr4::tree::TerminalNode *SHOW_ROUTINE();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *SYSTEM_VARIABLES_ADMIN();
    antlr4::tree::TerminalNode *TABLE_ENCRYPTION_ADMIN();
    antlr4::tree::TerminalNode *VERSION_TOKEN_ADMIN();
    antlr4::tree::TerminalNode *XA_RECOVER_ADMIN();

   
  };

  PrivilegeContext* privilege();

  class  PrivilegeLevelContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrivilegeLevelContext() = default;
    void copyFrom(PrivilegeLevelContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefiniteSchemaPrivLevelContext : public PrivilegeLevelContext {
  public:
    DefiniteSchemaPrivLevelContext(PrivilegeLevelContext *ctx);

    UidContext *uid();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *STAR();
  };

  class  DefiniteFullTablePrivLevel2Context : public PrivilegeLevelContext {
  public:
    DefiniteFullTablePrivLevel2Context(PrivilegeLevelContext *ctx);

    UidContext *uid();
    DottedIdContext *dottedId();
  };

  class  DefiniteFullTablePrivLevelContext : public PrivilegeLevelContext {
  public:
    DefiniteFullTablePrivLevelContext(PrivilegeLevelContext *ctx);

    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *DOT();
  };

  class  GlobalPrivLevelContext : public PrivilegeLevelContext {
  public:
    GlobalPrivLevelContext(PrivilegeLevelContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    antlr4::tree::TerminalNode *DOT();
  };

  class  DefiniteTablePrivLevelContext : public PrivilegeLevelContext {
  public:
    DefiniteTablePrivLevelContext(PrivilegeLevelContext *ctx);

    UidContext *uid();
  };

  class  CurrentSchemaPriviLevelContext : public PrivilegeLevelContext {
  public:
    CurrentSchemaPriviLevelContext(PrivilegeLevelContext *ctx);

    antlr4::tree::TerminalNode *STAR();
  };

  PrivilegeLevelContext* privilegeLevel();

  class  RenameUserClauseContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UserNameContext *fromFirst = nullptr;
    MySqlParser::UserNameContext *toFirst = nullptr;
    RenameUserClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);

   
  };

  RenameUserClauseContext* renameUserClause();

  class  AnalyzeTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;
    AnalyzeTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

   
  };

  AnalyzeTableContext* analyzeTable();

  class  CheckTableContext : public antlr4::ParserRuleContext {
  public:
    CheckTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    std::vector<CheckTableOptionContext *> checkTableOption();
    CheckTableOptionContext* checkTableOption(size_t i);

   
  };

  CheckTableContext* checkTable();

  class  ChecksumTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;
    ChecksumTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();

   
  };

  ChecksumTableContext* checksumTable();

  class  OptimizeTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;
    OptimizeTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

   
  };

  OptimizeTableContext* optimizeTable();

  class  RepairTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;
    RepairTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *USE_FRM();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

   
  };

  RepairTableContext* repairTable();

  class  CheckTableOptionContext : public antlr4::ParserRuleContext {
  public:
    CheckTableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *CHANGED();

   
  };

  CheckTableOptionContext* checkTableOption();

  class  CreateUdfunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *returnType = nullptr;
    CreateUdfunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    UidContext *uid();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *AGGREGATE();

   
  };

  CreateUdfunctionContext* createUdfunction();

  class  InstallPluginContext : public antlr4::ParserRuleContext {
  public:
    InstallPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    UidContext *uid();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  InstallPluginContext* installPlugin();

  class  UninstallPluginContext : public antlr4::ParserRuleContext {
  public:
    UninstallPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    UidContext *uid();

   
  };

  UninstallPluginContext* uninstallPlugin();

  class  SetStatementContext : public antlr4::ParserRuleContext {
  public:
    SetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SetStatementContext() = default;
    void copyFrom(SetStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SetTransactionContext : public SetStatementContext {
  public:
    SetTransactionContext(SetStatementContext *ctx);

    SetTransactionStatementContext *setTransactionStatement();
  };

  class  SetCharsetContext : public SetStatementContext {
  public:
    SetCharsetContext(SetStatementContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARSET();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
  };

  class  SetNamesContext : public SetStatementContext {
  public:
    SetNamesContext(SetStatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NAMES();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
  };

  class  SetPasswordContext : public SetStatementContext {
  public:
    SetPasswordContext(SetStatementContext *ctx);

    SetPasswordStatementContext *setPasswordStatement();
  };

  class  SetAutocommitContext : public SetStatementContext {
  public:
    SetAutocommitContext(SetStatementContext *ctx);

    SetAutocommitStatementContext *setAutocommitStatement();
  };

  class  SetNewValueInsideTriggerContext : public SetStatementContext {
  public:
    SetNewValueInsideTriggerContext(SetStatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR_ASSIGN();
    antlr4::tree::TerminalNode* VAR_ASSIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  SetVariableContext : public SetStatementContext {
  public:
    SetVariableContext(SetStatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    std::vector<VariableClauseContext *> variableClause();
    VariableClauseContext* variableClause(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR_ASSIGN();
    antlr4::tree::TerminalNode* VAR_ASSIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  SetStatementContext* setStatement();

  class  ShowStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ShowStatementContext() = default;
    void copyFrom(ShowStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ShowOpenTablesContext : public ShowStatementContext {
  public:
    ShowOpenTablesContext(ShowStatementContext *ctx);

    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *TABLES();
    UidContext *uid();
    ShowFilterContext *showFilter();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
  };

  class  ShowGlobalInfoContext : public ShowStatementContext {
  public:
    ShowGlobalInfoContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    ShowGlobalInfoClauseContext *showGlobalInfoClause();
  };

  class  ShowCreateFullIdObjectContext : public ShowStatementContext {
  public:
    ShowCreateFullIdObjectContext(ShowStatementContext *ctx);

    antlr4::Token *namedEntity = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *VIEW();
  };

  class  ShowCreateUserContext : public ShowStatementContext {
  public:
    ShowCreateUserContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    UserNameContext *userName();
  };

  class  ShowErrorsContext : public ShowStatementContext {
  public:
    ShowErrorsContext(ShowStatementContext *ctx);

    antlr4::Token *errorFormat = nullptr;
    MySqlParser::DecimalLiteralContext *offset = nullptr;
    MySqlParser::DecimalLiteralContext *rowCount = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *COMMA();
  };

  class  ShowCountErrorsContext : public ShowStatementContext {
  public:
    ShowCountErrorsContext(ShowStatementContext *ctx);

    antlr4::Token *errorFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *WARNINGS();
  };

  class  ShowObjectFilterContext : public ShowStatementContext {
  public:
    ShowObjectFilterContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    ShowCommonEntityContext *showCommonEntity();
    ShowFilterContext *showFilter();
  };

  class  ShowCreateDbContext : public ShowStatementContext {
  public:
    ShowCreateDbContext(ShowStatementContext *ctx);

    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    IfNotExistsContext *ifNotExists();
  };

  class  ShowEngineContext : public ShowStatementContext {
  public:
    ShowEngineContext(ShowStatementContext *ctx);

    antlr4::Token *engineOption = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *MUTEX();
  };

  class  ShowSchemaFilterContext : public ShowStatementContext {
  public:
    ShowSchemaFilterContext(ShowStatementContext *ctx);

    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    ShowSchemaEntityContext *showSchemaEntity();
    UidContext *uid();
    ShowFilterContext *showFilter();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
  };

  class  ShowIndexesContext : public ShowStatementContext {
  public:
    ShowIndexesContext(ShowStatementContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::Token *tableFormat = nullptr;
    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *KEYS();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    UidContext *uid();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
  };

  class  ShowLogEventsContext : public ShowStatementContext {
  public:
    ShowLogEventsContext(ShowStatementContext *ctx);

    antlr4::Token *logFormat = nullptr;
    antlr4::Token *filename = nullptr;
    MySqlParser::DecimalLiteralContext *fromPosition = nullptr;
    MySqlParser::DecimalLiteralContext *offset = nullptr;
    MySqlParser::DecimalLiteralContext *rowCount = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *COMMA();
  };

  class  ShowMasterLogsContext : public ShowStatementContext {
  public:
    ShowMasterLogsContext(ShowStatementContext *ctx);

    antlr4::Token *logFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();
  };

  class  ShowGrantsContext : public ShowStatementContext {
  public:
    ShowGrantsContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *FOR();
    UserNameContext *userName();
  };

  class  ShowSlaveStatusContext : public ShowStatementContext {
  public:
    ShowSlaveStatusContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  class  ShowRoutineContext : public ShowStatementContext {
  public:
    ShowRoutineContext(ShowStatementContext *ctx);

    antlr4::Token *routine = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CODE();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
  };

  class  ShowProfileContext : public ShowStatementContext {
  public:
    ShowProfileContext(ShowStatementContext *ctx);

    MySqlParser::DecimalLiteralContext *queryCount = nullptr;
    MySqlParser::DecimalLiteralContext *offset = nullptr;
    MySqlParser::DecimalLiteralContext *rowCount = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PROFILE();
    std::vector<ShowProfileTypeContext *> showProfileType();
    ShowProfileTypeContext* showProfileType(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *QUERY();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
  };

  class  ShowColumnsContext : public ShowStatementContext {
  public:
    ShowColumnsContext(ShowStatementContext *ctx);

    antlr4::Token *columnsFormat = nullptr;
    antlr4::Token *tableFormat = nullptr;
    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *FIELDS();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    antlr4::tree::TerminalNode *FULL();
    UidContext *uid();
    ShowFilterContext *showFilter();
  };

  ShowStatementContext* showStatement();

  class  VariableClauseContext : public antlr4::ParserRuleContext {
  public:
    VariableClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL_ID();
    UidContext *uid();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *LOCAL();
    std::vector<antlr4::tree::TerminalNode *> AT_SIGN();
    antlr4::tree::TerminalNode* AT_SIGN(size_t i);

   
  };

  VariableClauseContext* variableClause();

  class  ShowCommonEntityContext : public antlr4::ParserRuleContext {
  public:
    ShowCommonEntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SCHEMAS();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *VARIABLES();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

   
  };

  ShowCommonEntityContext* showCommonEntity();

  class  ShowFilterContext : public antlr4::ParserRuleContext {
  public:
    ShowFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

   
  };

  ShowFilterContext* showFilter();

  class  ShowGlobalInfoClauseContext : public antlr4::ParserRuleContext {
  public:
    ShowGlobalInfoClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *PLUGINS();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *PROFILES();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *AUTHORS();
    antlr4::tree::TerminalNode *CONTRIBUTORS();

   
  };

  ShowGlobalInfoClauseContext* showGlobalInfoClause();

  class  ShowSchemaEntityContext : public antlr4::ParserRuleContext {
  public:
    ShowSchemaEntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *TRIGGERS();

   
  };

  ShowSchemaEntityContext* showSchemaEntity();

  class  ShowProfileTypeContext : public antlr4::ParserRuleContext {
  public:
    ShowProfileTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *SWITCHES();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *IPC();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *FAULTS();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SWAPS();

   
  };

  ShowProfileTypeContext* showProfileType();

  class  BinlogStatementContext : public antlr4::ParserRuleContext {
  public:
    BinlogStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  BinlogStatementContext* binlogStatement();

  class  CacheIndexStatementContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UidContext *schema = nullptr;
    CacheIndexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<TableIndexesContext *> tableIndexes();
    TableIndexesContext* tableIndexes(size_t i);
    antlr4::tree::TerminalNode *IN();
    UidContext *uid();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();

   
  };

  CacheIndexStatementContext* cacheIndexStatement();

  class  FlushStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *flushFormat = nullptr;
    FlushStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    std::vector<FlushOptionContext *> flushOption();
    FlushOptionContext* flushOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

   
  };

  FlushStatementContext* flushStatement();

  class  KillStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *connectionFormat = nullptr;
    KillStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KILL();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *QUERY();

   
  };

  KillStatementContext* killStatement();

  class  LoadIndexIntoCacheContext : public antlr4::ParserRuleContext {
  public:
    LoadIndexIntoCacheContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *CACHE();
    std::vector<LoadedTableIndexesContext *> loadedTableIndexes();
    LoadedTableIndexesContext* loadedTableIndexes(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  LoadIndexIntoCacheContext* loadIndexIntoCache();

  class  ResetStatementContext : public antlr4::ParserRuleContext {
  public:
    ResetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *CACHE();

   
  };

  ResetStatementContext* resetStatement();

  class  ShutdownStatementContext : public antlr4::ParserRuleContext {
  public:
    ShutdownStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHUTDOWN();

   
  };

  ShutdownStatementContext* shutdownStatement();

  class  TableIndexesContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *indexFormat = nullptr;
    TableIndexesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();

   
  };

  TableIndexesContext* tableIndexes();

  class  FlushOptionContext : public antlr4::ParserRuleContext {
  public:
    FlushOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FlushOptionContext() = default;
    void copyFrom(FlushOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableFlushOptionContext : public FlushOptionContext {
  public:
    TableFlushOptionContext(FlushOptionContext *ctx);

    antlr4::tree::TerminalNode *TABLES();
    TablesContext *tables();
    FlushTableOptionContext *flushTableOption();
  };

  class  ChannelFlushOptionContext : public FlushOptionContext {
  public:
    ChannelFlushOptionContext(FlushOptionContext *ctx);

    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *LOGS();
    ChannelOptionContext *channelOption();
  };

  class  SimpleFlushOptionContext : public FlushOptionContext {
  public:
    SimpleFlushOptionContext(FlushOptionContext *ctx);

    antlr4::tree::TerminalNode *DES_KEY_FILE();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *USER_RESOURCES();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *SLOW();
  };

  FlushOptionContext* flushOption();

  class  FlushTableOptionContext : public antlr4::ParserRuleContext {
  public:
    FlushTableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EXPORT();

   
  };

  FlushTableOptionContext* flushTableOption();

  class  LoadedTableIndexesContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UidListContext *partitionList = nullptr;
    antlr4::Token *indexFormat = nullptr;
    MySqlParser::UidListContext *indexList = nullptr;
    LoadedTableIndexesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *LEAVES();
    std::vector<UidListContext *> uidList();
    UidListContext* uidList(size_t i);
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();

   
  };

  LoadedTableIndexesContext* loadedTableIndexes();

  class  SimpleDescribeStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *command = nullptr;
    MySqlParser::UidContext *column = nullptr;
    antlr4::Token *pattern = nullptr;
    SimpleDescribeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESC();
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  SimpleDescribeStatementContext* simpleDescribeStatement();

  class  FullDescribeStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *command = nullptr;
    antlr4::Token *formatType = nullptr;
    antlr4::Token *formatValue = nullptr;
    FullDescribeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescribeObjectClauseContext *describeObjectClause();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *TRADITIONAL();
    antlr4::tree::TerminalNode *JSON();

   
  };

  FullDescribeStatementContext* fullDescribeStatement();

  class  HelpStatementContext : public antlr4::ParserRuleContext {
  public:
    HelpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HELP();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  HelpStatementContext* helpStatement();

  class  UseStatementContext : public antlr4::ParserRuleContext {
  public:
    UseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    UidContext *uid();

   
  };

  UseStatementContext* useStatement();

  class  SignalStatementContext : public antlr4::ParserRuleContext {
  public:
    SignalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();
    antlr4::tree::TerminalNode *SET();
    std::vector<SignalConditionInformationContext *> signalConditionInformation();
    SignalConditionInformationContext* signalConditionInformation(size_t i);
    antlr4::tree::TerminalNode *SQLSTATE();
    StringLiteralContext *stringLiteral();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *VALUE();

   
  };

  SignalStatementContext* signalStatement();

  class  ResignalStatementContext : public antlr4::ParserRuleContext {
  public:
    ResignalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESIGNAL();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();
    antlr4::tree::TerminalNode *SET();
    std::vector<SignalConditionInformationContext *> signalConditionInformation();
    SignalConditionInformationContext* signalConditionInformation(size_t i);
    antlr4::tree::TerminalNode *SQLSTATE();
    StringLiteralContext *stringLiteral();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *VALUE();

   
  };

  ResignalStatementContext* resignalStatement();

  class  SignalConditionInformationContext : public antlr4::ParserRuleContext {
  public:
    SignalConditionInformationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *CLASS_ORIGIN();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *MYSQL_ERRNO();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME();
    antlr4::tree::TerminalNode *CATALOG_NAME();
    antlr4::tree::TerminalNode *SCHEMA_NAME();
    antlr4::tree::TerminalNode *TABLE_NAME();
    antlr4::tree::TerminalNode *COLUMN_NAME();
    antlr4::tree::TerminalNode *CURSOR_NAME();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    MysqlVariableContext *mysqlVariable();
    SimpleIdContext *simpleId();

   
  };

  SignalConditionInformationContext* signalConditionInformation();

  class  DiagnosticsStatementContext : public antlr4::ParserRuleContext {
  public:
    DiagnosticsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *STACKED();
    std::vector<VariableClauseContext *> variableClause();
    VariableClauseContext* variableClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *CONDITION();
    std::vector<DiagnosticsConditionInformationNameContext *> diagnosticsConditionInformationName();
    DiagnosticsConditionInformationNameContext* diagnosticsConditionInformationName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROW_COUNT();
    antlr4::tree::TerminalNode* ROW_COUNT(size_t i);
    DecimalLiteralContext *decimalLiteral();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  DiagnosticsStatementContext* diagnosticsStatement();

  class  DiagnosticsConditionInformationNameContext : public antlr4::ParserRuleContext {
  public:
    DiagnosticsConditionInformationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS_ORIGIN();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *MYSQL_ERRNO();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME();
    antlr4::tree::TerminalNode *CATALOG_NAME();
    antlr4::tree::TerminalNode *SCHEMA_NAME();
    antlr4::tree::TerminalNode *TABLE_NAME();
    antlr4::tree::TerminalNode *COLUMN_NAME();
    antlr4::tree::TerminalNode *CURSOR_NAME();

   
  };

  DiagnosticsConditionInformationNameContext* diagnosticsConditionInformationName();

  class  DescribeObjectClauseContext : public antlr4::ParserRuleContext {
  public:
    DescribeObjectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DescribeObjectClauseContext() = default;
    void copyFrom(DescribeObjectClauseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DescribeStatementsContext : public DescribeObjectClauseContext {
  public:
    DescribeStatementsContext(DescribeObjectClauseContext *ctx);

    SelectStatementContext *selectStatement();
    DeleteStatementContext *deleteStatement();
    InsertStatementContext *insertStatement();
    ReplaceStatementContext *replaceStatement();
    UpdateStatementContext *updateStatement();
  };

  class  DescribeConnectionContext : public DescribeObjectClauseContext {
  public:
    DescribeConnectionContext(DescribeObjectClauseContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CONNECTION();
    UidContext *uid();
  };

  DescribeObjectClauseContext* describeObjectClause();

  class  FullIdContext : public antlr4::ParserRuleContext {
  public:
    FullIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *DOT_ID();
    antlr4::tree::TerminalNode *DOT();

   
  };

  FullIdContext* fullId();

  class  TableNameContext : public antlr4::ParserRuleContext {
  public:
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullIdContext *fullId();

   
  };

  TableNameContext* tableName();

  class  FullColumnNameContext : public antlr4::ParserRuleContext {
  public:
    FullColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    std::vector<DottedIdContext *> dottedId();
    DottedIdContext* dottedId(size_t i);

   
  };

  FullColumnNameContext* fullColumnName();

  class  IndexColumnNameContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *sortType = nullptr;
    IndexColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

   
  };

  IndexColumnNameContext* indexColumnName();

  class  UserNameContext : public antlr4::ParserRuleContext {
  public:
    UserNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_USER_NAME();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  UserNameContext* userName();

  class  MysqlVariableContext : public antlr4::ParserRuleContext {
  public:
    MysqlVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL_ID();

   
  };

  MysqlVariableContext* mysqlVariable();

  class  CharsetNameContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    CharsetNameBaseContext *charsetNameBase();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *CHARSET_REVERSE_QOUTE_STRING();

   
  };

  CharsetNameContext* charsetName();

  class  CollationNameContext : public antlr4::ParserRuleContext {
  public:
    CollationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  CollationNameContext* collationName();

  class  EngineNameContext : public antlr4::ParserRuleContext {
  public:
    EngineNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *BLACKHOLE();
    antlr4::tree::TerminalNode *CSV();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *MRG_MYISAM();
    antlr4::tree::TerminalNode *MYISAM();
    antlr4::tree::TerminalNode *NDB();
    antlr4::tree::TerminalNode *NDBCLUSTER();
    antlr4::tree::TerminalNode *PERFORMANCE_SCHEMA();
    antlr4::tree::TerminalNode *TOKUDB();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();

   
  };

  EngineNameContext* engineName();

  class  UuidSetContext : public antlr4::ParserRuleContext {
  public:
    UuidSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON_SYMB();
    antlr4::tree::TerminalNode* COLON_SYMB(size_t i);

   
  };

  UuidSetContext* uuidSet();

  class  XidContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::XuidStringIdContext *globalTableUid = nullptr;
    MySqlParser::XuidStringIdContext *qualifier = nullptr;
    MySqlParser::DecimalLiteralContext *idFormat = nullptr;
    XidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<XuidStringIdContext *> xuidStringId();
    XuidStringIdContext* xuidStringId(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    DecimalLiteralContext *decimalLiteral();

   
  };

  XidContext* xid();

  class  XuidStringIdContext : public antlr4::ParserRuleContext {
  public:
    XuidStringIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *BIT_STRING();
    std::vector<antlr4::tree::TerminalNode *> HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode* HEXADECIMAL_LITERAL(size_t i);

   
  };

  XuidStringIdContext* xuidStringId();

  class  AuthPluginContext : public antlr4::ParserRuleContext {
  public:
    AuthPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

   
  };

  AuthPluginContext* authPlugin();

  class  UidContext : public antlr4::ParserRuleContext {
  public:
    UidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdContext *simpleId();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();
    antlr4::tree::TerminalNode *CHARSET_REVERSE_QOUTE_STRING();

   
  };

  UidContext* uid();

  class  SimpleIdContext : public antlr4::ParserRuleContext {
  public:
    SimpleIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    CharsetNameBaseContext *charsetNameBase();
    TransactionLevelBaseContext *transactionLevelBase();
    EngineNameContext *engineName();
    PrivilegesBaseContext *privilegesBase();
    IntervalTypeBaseContext *intervalTypeBase();
    DataTypeBaseContext *dataTypeBase();
    KeywordsCanBeIdContext *keywordsCanBeId();
    FunctionNameBaseContext *functionNameBase();

   
  };

  SimpleIdContext* simpleId();

  class  DottedIdContext : public antlr4::ParserRuleContext {
  public:
    DottedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_ID();
    antlr4::tree::TerminalNode *DOT();
    UidContext *uid();

   
  };

  DottedIdContext* dottedId();

  class  DecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    DecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *TWO_DECIMAL();

   
  };

  DecimalLiteralContext* decimalLiteral();

  class  FileSizeLiteralContext : public antlr4::ParserRuleContext {
  public:
    FileSizeLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILESIZE_LITERAL();
    DecimalLiteralContext *decimalLiteral();

   
  };

  FileSizeLiteralContext* fileSizeLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *START_NATIONAL_STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();

   
  };

  StringLiteralContext* stringLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

   
  };

  BooleanLiteralContext* booleanLiteral();

  class  HexadecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    HexadecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();

   
  };

  HexadecimalLiteralContext* hexadecimalLiteral();

  class  NullNotnullContext : public antlr4::ParserRuleContext {
  public:
    NullNotnullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();
    antlr4::tree::TerminalNode *NOT();

   
  };

  NullNotnullContext* nullNotnull();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nullLiteral = nullptr;
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralContext *stringLiteral();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *MINUS();
    HexadecimalLiteralContext *hexadecimalLiteral();
    BooleanLiteralContext *booleanLiteral();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    antlr4::tree::TerminalNode *BIT_STRING();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();
    antlr4::tree::TerminalNode *NOT();

   
  };

  ConstantContext* constant();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DataTypeContext() = default;
    void copyFrom(DataTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpatialDataTypeContext : public DataTypeContext {
  public:
    SpatialDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *GEOMCOLLECTION();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *GEOMETRY();
  };

  class  LongVarbinaryDataTypeContext : public DataTypeContext {
  public:
    LongVarbinaryDataTypeContext(DataTypeContext *ctx);

    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *VARBINARY();
  };

  class  CollectionDataTypeContext : public DataTypeContext {
  public:
    CollectionDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    CollectionOptionsContext *collectionOptions();
    antlr4::tree::TerminalNode *ENUM();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *BINARY();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARSET();
  };

  class  NationalVaryingStringDataTypeContext : public DataTypeContext {
  public:
    NationalVaryingStringDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *BINARY();
  };

  class  DimensionDataTypeContext : public DataTypeContext {
  public:
    DimensionDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *MEDIUMINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *MIDDLEINT();
    antlr4::tree::TerminalNode *INT1();
    antlr4::tree::TerminalNode *INT2();
    antlr4::tree::TerminalNode *INT3();
    antlr4::tree::TerminalNode *INT4();
    antlr4::tree::TerminalNode *INT8();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *ZEROFILL();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *REAL();
    LengthTwoDimensionContext *lengthTwoDimension();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *FLOAT4();
    antlr4::tree::TerminalNode *FLOAT8();
    LengthTwoOptionalDimensionContext *lengthTwoOptionalDimension();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *YEAR();
  };

  class  StringDataTypeContext : public DataTypeContext {
  public:
    StringDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *CHAR();
    std::vector<antlr4::tree::TerminalNode *> CHARACTER();
    antlr4::tree::TerminalNode* CHARACTER(size_t i);
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *TINYTEXT();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *MEDIUMTEXT();
    antlr4::tree::TerminalNode *LONGTEXT();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *VARYING();
    LengthOneDimensionContext *lengthOneDimension();
    std::vector<antlr4::tree::TerminalNode *> BINARY();
    antlr4::tree::TerminalNode* BINARY(size_t i);
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
  };

  class  LongVarcharDataTypeContext : public DataTypeContext {
  public:
    LongVarcharDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *BINARY();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
  };

  class  NationalStringDataTypeContext : public DataTypeContext {
  public:
    NationalStringDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *NCHAR();
  };

  class  SimpleDataTypeContext : public DataTypeContext {
  public:
    SimpleDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TINYBLOB();
    antlr4::tree::TerminalNode *MEDIUMBLOB();
    antlr4::tree::TerminalNode *LONGBLOB();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *SERIAL();
  };

  DataTypeContext* dataType();

  class  CollectionOptionsContext : public antlr4::ParserRuleContext {
  public:
    CollectionOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  CollectionOptionsContext* collectionOptions();

  class  ConvertedDataTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *typeName = nullptr;
    ConvertedDataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *NCHAR();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *CHAR();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *DECIMAL();
    LengthTwoDimensionContext *lengthTwoDimension();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *INTEGER();

   
  };

  ConvertedDataTypeContext* convertedDataType();

  class  LengthOneDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthOneDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *RR_BRACKET();

   
  };

  LengthOneDimensionContext* lengthOneDimension();

  class  LengthTwoDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthTwoDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();

   
  };

  LengthTwoDimensionContext* lengthTwoDimension();

  class  LengthTwoOptionalDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthTwoOptionalDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();

   
  };

  LengthTwoOptionalDimensionContext* lengthTwoOptionalDimension();

  class  UidListContext : public antlr4::ParserRuleContext {
  public:
    UidListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  UidListContext* uidList();

  class  TablesContext : public antlr4::ParserRuleContext {
  public:
    TablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  TablesContext* tables();

  class  IndexColumnNamesContext : public antlr4::ParserRuleContext {
  public:
    IndexColumnNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<IndexColumnNameContext *> indexColumnName();
    IndexColumnNameContext* indexColumnName(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  IndexColumnNamesContext* indexColumnNames();

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  ExpressionsContext* expressions();

  class  ExpressionsWithDefaultsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsWithDefaultsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionOrDefaultContext *> expressionOrDefault();
    ExpressionOrDefaultContext* expressionOrDefault(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  ExpressionsWithDefaultsContext* expressionsWithDefaults();

  class  ConstantsContext : public antlr4::ParserRuleContext {
  public:
    ConstantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  ConstantsContext* constants();

  class  SimpleStringsContext : public antlr4::ParserRuleContext {
  public:
    SimpleStringsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  SimpleStringsContext* simpleStrings();

  class  UserVariablesContext : public antlr4::ParserRuleContext {
  public:
    UserVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  UserVariablesContext* userVariables();

  class  DefaultValueContext : public antlr4::ParserRuleContext {
  public:
    DefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_LITERAL();
    ConstantContext *constant();
    std::vector<CurrentTimestampContext *> currentTimestamp();
    CurrentTimestampContext* currentTimestamp(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *UPDATE();
    UnaryOperatorContext *unaryOperator();

   
  };

  DefaultValueContext* defaultValue();

  class  CurrentTimestampContext : public antlr4::ParserRuleContext {
  public:
    CurrentTimestampContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOW();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    DecimalLiteralContext *decimalLiteral();

   
  };

  CurrentTimestampContext* currentTimestamp();

  class  ExpressionOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    ExpressionOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();

   
  };

  ExpressionOrDefaultContext* expressionOrDefault();

  class  IfExistsContext : public antlr4::ParserRuleContext {
  public:
    IfExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

   
  };

  IfExistsContext* ifExists();

  class  IfNotExistsContext : public antlr4::ParserRuleContext {
  public:
    IfNotExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

   
  };

  IfNotExistsContext* ifNotExists();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionCallContext() = default;
    void copyFrom(FunctionCallContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpecificFunctionCallContext : public FunctionCallContext {
  public:
    SpecificFunctionCallContext(FunctionCallContext *ctx);

    SpecificFunctionContext *specificFunction();
  };

  class  PasswordFunctionCallContext : public FunctionCallContext {
  public:
    PasswordFunctionCallContext(FunctionCallContext *ctx);

    PasswordFunctionClauseContext *passwordFunctionClause();
  };

  class  UdfFunctionCallContext : public FunctionCallContext {
  public:
    UdfFunctionCallContext(FunctionCallContext *ctx);

    FullIdContext *fullId();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    FunctionArgsContext *functionArgs();
  };

  class  AggregateFunctionCallContext : public FunctionCallContext {
  public:
    AggregateFunctionCallContext(FunctionCallContext *ctx);

    AggregateWindowedFunctionContext *aggregateWindowedFunction();
  };

  class  ScalarFunctionCallContext : public FunctionCallContext {
  public:
    ScalarFunctionCallContext(FunctionCallContext *ctx);

    ScalarFunctionNameContext *scalarFunctionName();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    FunctionArgsContext *functionArgs();
  };

  FunctionCallContext* functionCall();

  class  SpecificFunctionContext : public antlr4::ParserRuleContext {
  public:
    SpecificFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SpecificFunctionContext() = default;
    void copyFrom(SpecificFunctionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PositionFunctionCallContext : public SpecificFunctionContext {
  public:
    PositionFunctionCallContext(SpecificFunctionContext *ctx);

    MySqlParser::StringLiteralContext *positionString = nullptr;
    MySqlParser::ExpressionContext *positionExpression = nullptr;
    MySqlParser::StringLiteralContext *inString = nullptr;
    MySqlParser::ExpressionContext *inExpression = nullptr;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<StringLiteralContext *> stringLiteral();
    StringLiteralContext* stringLiteral(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
  };

  class  TrimFunctionCallContext : public SpecificFunctionContext {
  public:
    TrimFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *positioinForm = nullptr;
    MySqlParser::StringLiteralContext *sourceString = nullptr;
    MySqlParser::ExpressionContext *sourceExpression = nullptr;
    MySqlParser::StringLiteralContext *fromString = nullptr;
    MySqlParser::ExpressionContext *fromExpression = nullptr;
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *TRAILING();
    std::vector<StringLiteralContext *> stringLiteral();
    StringLiteralContext* stringLiteral(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
  };

  class  JsonValueFunctionCallContext : public SpecificFunctionContext {
  public:
    JsonValueFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *JSON_VALUE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *RETURNING();
    ConvertedDataTypeContext *convertedDataType();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *EMPTY();
    std::vector<antlr4::tree::TerminalNode *> ERROR();
    antlr4::tree::TerminalNode* ERROR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<DefaultValueContext *> defaultValue();
    DefaultValueContext* defaultValue(size_t i);
  };

  class  CaseFunctionCallContext : public SpecificFunctionContext {
  public:
    CaseFunctionCallContext(SpecificFunctionContext *ctx);

    MySqlParser::FunctionArgContext *elseArg = nullptr;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<CaseFuncAlternativeContext *> caseFuncAlternative();
    CaseFuncAlternativeContext* caseFuncAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    FunctionArgContext *functionArg();
  };

  class  ExtractFunctionCallContext : public SpecificFunctionContext {
  public:
    ExtractFunctionCallContext(SpecificFunctionContext *ctx);

    MySqlParser::StringLiteralContext *sourceString = nullptr;
    MySqlParser::ExpressionContext *sourceExpression = nullptr;
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    IntervalTypeContext *intervalType();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *RR_BRACKET();
    StringLiteralContext *stringLiteral();
    ExpressionContext *expression();
  };

  class  DataTypeFunctionCallContext : public SpecificFunctionContext {
  public:
    DataTypeFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *separator = nullptr;
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    ConvertedDataTypeContext *convertedDataType();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *USING();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *AS();
  };

  class  ValuesFunctionCallContext : public SpecificFunctionContext {
  public:
    ValuesFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    FullColumnNameContext *fullColumnName();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  CaseExpressionFunctionCallContext : public SpecificFunctionContext {
  public:
    CaseExpressionFunctionCallContext(SpecificFunctionContext *ctx);

    MySqlParser::FunctionArgContext *elseArg = nullptr;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    std::vector<CaseFuncAlternativeContext *> caseFuncAlternative();
    CaseFuncAlternativeContext* caseFuncAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    FunctionArgContext *functionArg();
  };

  class  SimpleFunctionCallContext : public SpecificFunctionContext {
  public:
    SimpleFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  CharFunctionCallContext : public SpecificFunctionContext {
  public:
    CharFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *USING();
    CharsetNameContext *charsetName();
  };

  class  WeightFunctionCallContext : public SpecificFunctionContext {
  public:
    WeightFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *stringFormat = nullptr;
    antlr4::tree::TerminalNode *WEIGHT_STRING();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    StringLiteralContext *stringLiteral();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    DecimalLiteralContext *decimalLiteral();
    LevelsInWeightStringContext *levelsInWeightString();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BINARY();
  };

  class  GetFormatFunctionCallContext : public SpecificFunctionContext {
  public:
    GetFormatFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *datetimeFormat = nullptr;
    antlr4::tree::TerminalNode *GET_FORMAT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *DATETIME();
  };

  class  SubstrFunctionCallContext : public SpecificFunctionContext {
  public:
    SubstrFunctionCallContext(SpecificFunctionContext *ctx);

    MySqlParser::StringLiteralContext *sourceString = nullptr;
    MySqlParser::ExpressionContext *sourceExpression = nullptr;
    MySqlParser::DecimalLiteralContext *fromDecimal = nullptr;
    MySqlParser::ExpressionContext *fromExpression = nullptr;
    MySqlParser::DecimalLiteralContext *forDecimal = nullptr;
    MySqlParser::ExpressionContext *forExpression = nullptr;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    StringLiteralContext *stringLiteral();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *FOR();
  };

  SpecificFunctionContext* specificFunction();

  class  CaseFuncAlternativeContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::FunctionArgContext *condition = nullptr;
    MySqlParser::FunctionArgContext *consequent = nullptr;
    CaseFuncAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    std::vector<FunctionArgContext *> functionArg();
    FunctionArgContext* functionArg(size_t i);

   
  };

  CaseFuncAlternativeContext* caseFuncAlternative();

  class  LevelsInWeightStringContext : public antlr4::ParserRuleContext {
  public:
    LevelsInWeightStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LevelsInWeightStringContext() = default;
    void copyFrom(LevelsInWeightStringContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LevelWeightRangeContext : public LevelsInWeightStringContext {
  public:
    LevelWeightRangeContext(LevelsInWeightStringContext *ctx);

    MySqlParser::DecimalLiteralContext *firstLevel = nullptr;
    MySqlParser::DecimalLiteralContext *lastLevel = nullptr;
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *MINUS();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
  };

  class  LevelWeightListContext : public LevelsInWeightStringContext {
  public:
    LevelWeightListContext(LevelsInWeightStringContext *ctx);

    antlr4::tree::TerminalNode *LEVEL();
    std::vector<LevelInWeightListElementContext *> levelInWeightListElement();
    LevelInWeightListElementContext* levelInWeightListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  LevelsInWeightStringContext* levelsInWeightString();

  class  LevelInWeightListElementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *orderType = nullptr;
    LevelInWeightListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *REVERSE();

   
  };

  LevelInWeightListElementContext* levelInWeightListElement();

  class  AggregateWindowedFunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *aggregator = nullptr;
    antlr4::Token *starArg = nullptr;
    antlr4::Token *separator = nullptr;
    AggregateWindowedFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    FunctionArgContext *functionArg();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *STAR();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *GROUP_CONCAT();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<OrderByExpressionContext *> orderByExpression();
    OrderByExpressionContext* orderByExpression(size_t i);
    antlr4::tree::TerminalNode *SEPARATOR();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  AggregateWindowedFunctionContext* aggregateWindowedFunction();

  class  ScalarFunctionNameContext : public antlr4::ParserRuleContext {
  public:
    ScalarFunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionNameBaseContext *functionNameBase();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *CURDATE();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURTIME();
    antlr4::tree::TerminalNode *DATE_ADD();
    antlr4::tree::TerminalNode *DATE_SUB();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *NOW();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SYSDATE();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *UTC_DATE();
    antlr4::tree::TerminalNode *UTC_TIME();
    antlr4::tree::TerminalNode *UTC_TIMESTAMP();

   
  };

  ScalarFunctionNameContext* scalarFunctionName();

  class  PasswordFunctionClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *functionName = nullptr;
    PasswordFunctionClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    FunctionArgContext *functionArg();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *OLD_PASSWORD();

   
  };

  PasswordFunctionClauseContext* passwordFunctionClause();

  class  FunctionArgsContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<FullColumnNameContext *> fullColumnName();
    FullColumnNameContext* fullColumnName(size_t i);
    std::vector<FunctionCallContext *> functionCall();
    FunctionCallContext* functionCall(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  FunctionArgsContext* functionArgs();

  class  FunctionArgContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    FullColumnNameContext *fullColumnName();
    FunctionCallContext *functionCall();
    ExpressionContext *expression();

   
  };

  FunctionArgContext* functionArg();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IsExpressionContext : public ExpressionContext {
  public:
    IsExpressionContext(ExpressionContext *ctx);

    antlr4::Token *testValue = nullptr;
    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *NOT();
  };

  class  NotExpressionContext : public ExpressionContext {
  public:
    NotExpressionContext(ExpressionContext *ctx);

    antlr4::Token *notOperator = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXCLAMATION_SYMBOL();
  };

  class  LogicalExpressionContext : public ExpressionContext {
  public:
    LogicalExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    LogicalOperatorContext *logicalOperator();
  };

  class  PredicateExpressionContext : public ExpressionContext {
  public:
    PredicateExpressionContext(ExpressionContext *ctx);

    PredicateContext *predicate();
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateContext() = default;
    void copyFrom(PredicateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SoundsLikePredicateContext : public PredicateContext {
  public:
    SoundsLikePredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *LIKE();
  };

  class  ExpressionAtomPredicateContext : public PredicateContext {
  public:
    ExpressionAtomPredicateContext(PredicateContext *ctx);

    ExpressionAtomContext *expressionAtom();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *VAR_ASSIGN();
  };

  class  SubqueryComparisonPredicateContext : public PredicateContext {
  public:
    SubqueryComparisonPredicateContext(PredicateContext *ctx);

    antlr4::Token *quantifier = nullptr;
    PredicateContext *predicate();
    ComparisonOperatorContext *comparisonOperator();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();
  };

  class  JsonMemberOfPredicateContext : public PredicateContext {
  public:
    JsonMemberOfPredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  BinaryComparisonPredicateContext : public PredicateContext {
  public:
    BinaryComparisonPredicateContext(PredicateContext *ctx);

    MySqlParser::PredicateContext *left = nullptr;
    MySqlParser::PredicateContext *right = nullptr;
    ComparisonOperatorContext *comparisonOperator();
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
  };

  class  InPredicateContext : public PredicateContext {
  public:
    InPredicateContext(PredicateContext *ctx);

    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    SelectStatementContext *selectStatement();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *NOT();
  };

  class  BetweenPredicateContext : public PredicateContext {
  public:
    BetweenPredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NOT();
  };

  class  IsNullPredicateContext : public PredicateContext {
  public:
    IsNullPredicateContext(PredicateContext *ctx);

    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IS();
    NullNotnullContext *nullNotnull();
  };

  class  LikePredicateContext : public PredicateContext {
  public:
    LikePredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
  };

  class  RegexpPredicateContext : public PredicateContext {
  public:
    RegexpPredicateContext(PredicateContext *ctx);

    antlr4::Token *regex = nullptr;
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *REGEXP();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *NOT();
  };

  PredicateContext* predicate();
  PredicateContext* predicate(int precedence);
  class  ExpressionAtomContext : public antlr4::ParserRuleContext {
  public:
    ExpressionAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionAtomContext() = default;
    void copyFrom(ExpressionAtomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnaryExpressionAtomContext : public ExpressionAtomContext {
  public:
    UnaryExpressionAtomContext(ExpressionAtomContext *ctx);

    UnaryOperatorContext *unaryOperator();
    ExpressionAtomContext *expressionAtom();
  };

  class  CollateExpressionAtomContext : public ExpressionAtomContext {
  public:
    CollateExpressionAtomContext(ExpressionAtomContext *ctx);

    ExpressionAtomContext *expressionAtom();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
  };

  class  MysqlVariableExpressionAtomContext : public ExpressionAtomContext {
  public:
    MysqlVariableExpressionAtomContext(ExpressionAtomContext *ctx);

    MysqlVariableContext *mysqlVariable();
  };

  class  NestedExpressionAtomContext : public ExpressionAtomContext {
  public:
    NestedExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  NestedRowExpressionAtomContext : public ExpressionAtomContext {
  public:
    NestedRowExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
  };

  class  MathExpressionAtomContext : public ExpressionAtomContext {
  public:
    MathExpressionAtomContext(ExpressionAtomContext *ctx);

    MySqlParser::ExpressionAtomContext *left = nullptr;
    MySqlParser::ExpressionAtomContext *right = nullptr;
    MathOperatorContext *mathOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
  };

  class  ExistsExpressionAtomContext : public ExpressionAtomContext {
  public:
    ExistsExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  IntervalExpressionAtomContext : public ExpressionAtomContext {
  public:
    IntervalExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *INTERVAL();
    ExpressionContext *expression();
    IntervalTypeContext *intervalType();
  };

  class  JsonExpressionAtomContext : public ExpressionAtomContext {
  public:
    JsonExpressionAtomContext(ExpressionAtomContext *ctx);

    MySqlParser::ExpressionAtomContext *left = nullptr;
    MySqlParser::ExpressionAtomContext *right = nullptr;
    JsonOperatorContext *jsonOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
  };

  class  SubqueryExpressionAtomContext : public ExpressionAtomContext {
  public:
    SubqueryExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RR_BRACKET();
  };

  class  ConstantExpressionAtomContext : public ExpressionAtomContext {
  public:
    ConstantExpressionAtomContext(ExpressionAtomContext *ctx);

    ConstantContext *constant();
  };

  class  FunctionCallExpressionAtomContext : public ExpressionAtomContext {
  public:
    FunctionCallExpressionAtomContext(ExpressionAtomContext *ctx);

    FunctionCallContext *functionCall();
  };

  class  BinaryExpressionAtomContext : public ExpressionAtomContext {
  public:
    BinaryExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *BINARY();
    ExpressionAtomContext *expressionAtom();
  };

  class  FullColumnNameExpressionAtomContext : public ExpressionAtomContext {
  public:
    FullColumnNameExpressionAtomContext(ExpressionAtomContext *ctx);

    FullColumnNameContext *fullColumnName();
  };

  class  BitExpressionAtomContext : public ExpressionAtomContext {
  public:
    BitExpressionAtomContext(ExpressionAtomContext *ctx);

    MySqlParser::ExpressionAtomContext *left = nullptr;
    MySqlParser::ExpressionAtomContext *right = nullptr;
    BitOperatorContext *bitOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
  };

  ExpressionAtomContext* expressionAtom();
  ExpressionAtomContext* expressionAtom(int precedence);
  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCLAMATION_SYMBOL();
    antlr4::tree::TerminalNode *BIT_NOT_OP();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT();

   
  };

  UnaryOperatorContext* unaryOperator();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *GREATER_SYMBOL();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *EXCLAMATION_SYMBOL();

   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  LogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    LogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    std::vector<antlr4::tree::TerminalNode *> BIT_AND_OP();
    antlr4::tree::TerminalNode* BIT_AND_OP(size_t i);
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *OR();
    std::vector<antlr4::tree::TerminalNode *> BIT_OR_OP();
    antlr4::tree::TerminalNode* BIT_OR_OP(size_t i);

   
  };

  LogicalOperatorContext* logicalOperator();

  class  BitOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LESS_SYMBOL();
    antlr4::tree::TerminalNode* LESS_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GREATER_SYMBOL();
    antlr4::tree::TerminalNode* GREATER_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *BIT_AND_OP();
    antlr4::tree::TerminalNode *BIT_XOR_OP();
    antlr4::tree::TerminalNode *BIT_OR_OP();

   
  };

  BitOperatorContext* bitOperator();

  class  MathOperatorContext : public antlr4::ParserRuleContext {
  public:
    MathOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MINUSMINUS();

   
  };

  MathOperatorContext* mathOperator();

  class  JsonOperatorContext : public antlr4::ParserRuleContext {
  public:
    JsonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS();
    std::vector<antlr4::tree::TerminalNode *> GREATER_SYMBOL();
    antlr4::tree::TerminalNode* GREATER_SYMBOL(size_t i);

   
  };

  JsonOperatorContext* jsonOperator();

  class  CharsetNameBaseContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARMSCII8();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *BIG5();
    antlr4::tree::TerminalNode *CP1250();
    antlr4::tree::TerminalNode *CP1251();
    antlr4::tree::TerminalNode *CP1256();
    antlr4::tree::TerminalNode *CP1257();
    antlr4::tree::TerminalNode *CP850();
    antlr4::tree::TerminalNode *CP852();
    antlr4::tree::TerminalNode *CP866();
    antlr4::tree::TerminalNode *CP932();
    antlr4::tree::TerminalNode *DEC8();
    antlr4::tree::TerminalNode *EUCJPMS();
    antlr4::tree::TerminalNode *EUCKR();
    antlr4::tree::TerminalNode *GB2312();
    antlr4::tree::TerminalNode *GBK();
    antlr4::tree::TerminalNode *GEOSTD8();
    antlr4::tree::TerminalNode *GREEK();
    antlr4::tree::TerminalNode *HEBREW();
    antlr4::tree::TerminalNode *HP8();
    antlr4::tree::TerminalNode *KEYBCS2();
    antlr4::tree::TerminalNode *KOI8R();
    antlr4::tree::TerminalNode *KOI8U();
    antlr4::tree::TerminalNode *LATIN1();
    antlr4::tree::TerminalNode *LATIN2();
    antlr4::tree::TerminalNode *LATIN5();
    antlr4::tree::TerminalNode *LATIN7();
    antlr4::tree::TerminalNode *MACCE();
    antlr4::tree::TerminalNode *MACROMAN();
    antlr4::tree::TerminalNode *SJIS();
    antlr4::tree::TerminalNode *SWE7();
    antlr4::tree::TerminalNode *TIS620();
    antlr4::tree::TerminalNode *UCS2();
    antlr4::tree::TerminalNode *UJIS();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *UTF16LE();
    antlr4::tree::TerminalNode *UTF32();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF8MB3();
    antlr4::tree::TerminalNode *UTF8MB4();

   
  };

  CharsetNameBaseContext* charsetNameBase();

  class  TransactionLevelBaseContext : public antlr4::ParserRuleContext {
  public:
    TransactionLevelBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *SERIALIZABLE();

   
  };

  TransactionLevelBaseContext* transactionLevelBase();

  class  PrivilegesBaseContext : public antlr4::ParserRuleContext {
  public:
    PrivilegesBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *PRIVILEGES();

   
  };

  PrivilegesBaseContext* privilegesBase();

  class  IntervalTypeBaseContext : public antlr4::ParserRuleContext {
  public:
    IntervalTypeBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *MICROSECOND();

   
  };

  IntervalTypeBaseContext* intervalTypeBase();

  class  DataTypeBaseContext : public antlr4::ParserRuleContext {
  public:
    DataTypeBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *TEXT();

   
  };

  DataTypeBaseContext* dataTypeBase();

  class  KeywordsCanBeIdContext : public antlr4::ParserRuleContext {
  public:
    KeywordsCanBeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *AUDIT_ADMIN();
    antlr4::tree::TerminalNode *AUTHORS();
    antlr4::tree::TerminalNode *AUTOCOMMIT();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    antlr4::tree::TerminalNode *BACKUP_ADMIN();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *BINLOG_ADMIN();
    antlr4::tree::TerminalNode *BINLOG_ENCRYPTION_ADMIN();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *CHANGED();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *PAGE_CHECKSUM();
    antlr4::tree::TerminalNode *CATALOG_NAME();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *CLASS_ORIGIN();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *CLONE_ADMIN();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODE();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    antlr4::tree::TerminalNode *COLUMN_NAME();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONNECTION_ADMIN();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CONTRIBUTORS();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURSOR_NAME();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DEFAULT_AUTH();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    antlr4::tree::TerminalNode *DES_KEY_FILE();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DUMPFILE();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *ENCRYPTION_KEY_ADMIN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDS();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *EVEN();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXPIRE();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *FAULTS();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FIREWALL_ADMIN();
    antlr4::tree::TerminalNode *FIREWALL_USER();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FOLLOWS();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *GROUP_CONCAT();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();
    antlr4::tree::TerminalNode *GROUP_REPLICATION_ADMIN();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HELP();
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *INNODB_REDO_LOG_ARCHIVE();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *IO_THREAD();
    antlr4::tree::TerminalNode *IPC();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LEAVES();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY();
    antlr4::tree::TerminalNode *MASTER_DELAY();
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD();
    antlr4::tree::TerminalNode *MASTER_HOST();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *MASTER_PASSWORD();
    antlr4::tree::TerminalNode *MASTER_PORT();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT();
    antlr4::tree::TerminalNode *MASTER_SSL();
    antlr4::tree::TerminalNode *MASTER_SSL_CA();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION();
    antlr4::tree::TerminalNode *MASTER_USER();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MAX_ROWS();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *MIGRATE();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *MIN_ROWS();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MUTEX();
    antlr4::tree::TerminalNode *MYSQL();
    antlr4::tree::TerminalNode *MYSQL_ERRNO();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMES();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NDB_STORED_USER();
    antlr4::tree::TerminalNode *NEVER();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OJ();
    antlr4::tree::TerminalNode *OLD_PASSWORD();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS();
    antlr4::tree::TerminalNode *OPTIONAL();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITIONING();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PERSIST_RO_VARIABLES_ADMIN();
    antlr4::tree::TerminalNode *PHASE();
    antlr4::tree::TerminalNode *PLUGINS();
    antlr4::tree::TerminalNode *PLUGIN_DIR();
    antlr4::tree::TerminalNode *PLUGIN();
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *PRECEDES();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PREV();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROFILES();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *REPLICATE_DO_DB();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *REPLICATION_APPLIER();
    antlr4::tree::TerminalNode *REPLICATION_SLAVE_ADMIN();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESOURCE_GROUP_ADMIN();
    antlr4::tree::TerminalNode *RESOURCE_GROUP_USER();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLE_ADMIN();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SCHEDULE();
    antlr4::tree::TerminalNode *SCHEMA_NAME();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SERIAL();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SESSION_VARIABLES_ADMIN();
    antlr4::tree::TerminalNode *SET_USER_ID();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *SHOW_ROUTINE();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *SLOW();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SOCKET();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS();
    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT();
    antlr4::tree::TerminalNode *SQL_CACHE();
    antlr4::tree::TerminalNode *SQL_NO_CACHE();
    antlr4::tree::TerminalNode *SQL_THREAD();
    antlr4::tree::TerminalNode *STACKED();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN();
    antlr4::tree::TerminalNode *SUBJECT();
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SWAPS();
    antlr4::tree::TerminalNode *SWITCHES();
    antlr4::tree::TerminalNode *SYSTEM_VARIABLES_ADMIN();
    antlr4::tree::TerminalNode *TABLE_NAME();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TABLE_ENCRYPTION_ADMIN();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *TRADITIONAL();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONAL();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *USE_FRM();
    antlr4::tree::TerminalNode *USER_RESOURCES();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARIABLES();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *VERSION_TOKEN_ADMIN();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *XA_RECOVER_ADMIN();
    antlr4::tree::TerminalNode *XML();

   
  };

  KeywordsCanBeIdContext* keywordsCanBeId();

  class  FunctionNameBaseContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *ACOS();
    antlr4::tree::TerminalNode *ADDDATE();
    antlr4::tree::TerminalNode *ADDTIME();
    antlr4::tree::TerminalNode *AES_DECRYPT();
    antlr4::tree::TerminalNode *AES_ENCRYPT();
    antlr4::tree::TerminalNode *AREA();
    antlr4::tree::TerminalNode *ASBINARY();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ASTEXT();
    antlr4::tree::TerminalNode *ASWKB();
    antlr4::tree::TerminalNode *ASWKT();
    antlr4::tree::TerminalNode *ASYMMETRIC_DECRYPT();
    antlr4::tree::TerminalNode *ASYMMETRIC_DERIVE();
    antlr4::tree::TerminalNode *ASYMMETRIC_ENCRYPT();
    antlr4::tree::TerminalNode *ASYMMETRIC_SIGN();
    antlr4::tree::TerminalNode *ASYMMETRIC_VERIFY();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATAN2();
    antlr4::tree::TerminalNode *BENCHMARK();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BIT_COUNT();
    antlr4::tree::TerminalNode *BIT_LENGTH();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *CENTROID();
    antlr4::tree::TerminalNode *CHARACTER_LENGTH();
    antlr4::tree::TerminalNode *CHARSET();
    antlr4::tree::TerminalNode *CHAR_LENGTH();
    antlr4::tree::TerminalNode *COERCIBILITY();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCAT_WS();
    antlr4::tree::TerminalNode *CONNECTION_ID();
    antlr4::tree::TerminalNode *CONV();
    antlr4::tree::TerminalNode *CONVERT_TZ();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COT();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *CRC32();
    antlr4::tree::TerminalNode *CREATE_ASYMMETRIC_PRIV_KEY();
    antlr4::tree::TerminalNode *CREATE_ASYMMETRIC_PUB_KEY();
    antlr4::tree::TerminalNode *CREATE_DH_PARAMETERS();
    antlr4::tree::TerminalNode *CREATE_DIGEST();
    antlr4::tree::TerminalNode *CROSSES();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATEDIFF();
    antlr4::tree::TerminalNode *DATE_FORMAT();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYNAME();
    antlr4::tree::TerminalNode *DAYOFMONTH();
    antlr4::tree::TerminalNode *DAYOFWEEK();
    antlr4::tree::TerminalNode *DAYOFYEAR();
    antlr4::tree::TerminalNode *DECODE();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *DES_DECRYPT();
    antlr4::tree::TerminalNode *DES_ENCRYPT();
    antlr4::tree::TerminalNode *DIMENSION();
    antlr4::tree::TerminalNode *DISJOINT();
    antlr4::tree::TerminalNode *ELT();
    antlr4::tree::TerminalNode *ENCODE();
    antlr4::tree::TerminalNode *ENCRYPT();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *ENVELOPE();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPORT_SET();
    antlr4::tree::TerminalNode *EXTERIORRING();
    antlr4::tree::TerminalNode *EXTRACTVALUE();
    antlr4::tree::TerminalNode *FIELD();
    antlr4::tree::TerminalNode *FIND_IN_SET();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FOUND_ROWS();
    antlr4::tree::TerminalNode *FROM_BASE64();
    antlr4::tree::TerminalNode *FROM_DAYS();
    antlr4::tree::TerminalNode *FROM_UNIXTIME();
    antlr4::tree::TerminalNode *GEOMCOLLFROMTEXT();
    antlr4::tree::TerminalNode *GEOMCOLLFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTIONFROMTEXT();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTIONFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYFROMTEXT();
    antlr4::tree::TerminalNode *GEOMETRYFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYN();
    antlr4::tree::TerminalNode *GEOMETRYTYPE();
    antlr4::tree::TerminalNode *GEOMFROMTEXT();
    antlr4::tree::TerminalNode *GEOMFROMWKB();
    antlr4::tree::TerminalNode *GET_FORMAT();
    antlr4::tree::TerminalNode *GET_LOCK();
    antlr4::tree::TerminalNode *GLENGTH();
    antlr4::tree::TerminalNode *GREATEST();
    antlr4::tree::TerminalNode *GTID_SUBSET();
    antlr4::tree::TerminalNode *GTID_SUBTRACT();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *IFNULL();
    antlr4::tree::TerminalNode *INET6_ATON();
    antlr4::tree::TerminalNode *INET6_NTOA();
    antlr4::tree::TerminalNode *INET_ATON();
    antlr4::tree::TerminalNode *INET_NTOA();
    antlr4::tree::TerminalNode *INSTR();
    antlr4::tree::TerminalNode *INTERIORRINGN();
    antlr4::tree::TerminalNode *INTERSECTS();
    antlr4::tree::TerminalNode *INVISIBLE();
    antlr4::tree::TerminalNode *ISCLOSED();
    antlr4::tree::TerminalNode *ISEMPTY();
    antlr4::tree::TerminalNode *ISNULL();
    antlr4::tree::TerminalNode *ISSIMPLE();
    antlr4::tree::TerminalNode *IS_FREE_LOCK();
    antlr4::tree::TerminalNode *IS_IPV4();
    antlr4::tree::TerminalNode *IS_IPV4_COMPAT();
    antlr4::tree::TerminalNode *IS_IPV4_MAPPED();
    antlr4::tree::TerminalNode *IS_IPV6();
    antlr4::tree::TerminalNode *IS_USED_LOCK();
    antlr4::tree::TerminalNode *LAST_INSERT_ID();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LEAST();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LINEFROMTEXT();
    antlr4::tree::TerminalNode *LINEFROMWKB();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *LINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *LINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOAD_FILE();
    antlr4::tree::TerminalNode *LOCATE();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LOG2();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LPAD();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MAKEDATE();
    antlr4::tree::TerminalNode *MAKETIME();
    antlr4::tree::TerminalNode *MAKE_SET();
    antlr4::tree::TerminalNode *MASTER_POS_WAIT();
    antlr4::tree::TerminalNode *MBRCONTAINS();
    antlr4::tree::TerminalNode *MBRDISJOINT();
    antlr4::tree::TerminalNode *MBREQUAL();
    antlr4::tree::TerminalNode *MBRINTERSECTS();
    antlr4::tree::TerminalNode *MBROVERLAPS();
    antlr4::tree::TerminalNode *MBRTOUCHES();
    antlr4::tree::TerminalNode *MBRWITHIN();
    antlr4::tree::TerminalNode *MD5();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MLINEFROMTEXT();
    antlr4::tree::TerminalNode *MLINEFROMWKB();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHNAME();
    antlr4::tree::TerminalNode *MPOINTFROMTEXT();
    antlr4::tree::TerminalNode *MPOINTFROMWKB();
    antlr4::tree::TerminalNode *MPOLYFROMTEXT();
    antlr4::tree::TerminalNode *MPOLYFROMWKB();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *MULTILINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOINTFROMTEXT();
    antlr4::tree::TerminalNode *MULTIPOINTFROMWKB();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *MULTIPOLYGONFROMTEXT();
    antlr4::tree::TerminalNode *MULTIPOLYGONFROMWKB();
    antlr4::tree::TerminalNode *NAME_CONST();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NUMGEOMETRIES();
    antlr4::tree::TerminalNode *NUMINTERIORRINGS();
    antlr4::tree::TerminalNode *NUMPOINTS();
    antlr4::tree::TerminalNode *OCT();
    antlr4::tree::TerminalNode *OCTET_LENGTH();
    antlr4::tree::TerminalNode *ORD();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *PERIOD_ADD();
    antlr4::tree::TerminalNode *PERIOD_DIFF();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POINTFROMTEXT();
    antlr4::tree::TerminalNode *POINTFROMWKB();
    antlr4::tree::TerminalNode *POINTN();
    antlr4::tree::TerminalNode *POLYFROMTEXT();
    antlr4::tree::TerminalNode *POLYFROMWKB();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *POLYGONFROMTEXT();
    antlr4::tree::TerminalNode *POLYGONFROMWKB();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *POW();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *RANDOM_BYTES();
    antlr4::tree::TerminalNode *RELEASE_LOCK();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *RPAD();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SEC_TO_TIME();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SESSION_VARIABLES_ADMIN();
    antlr4::tree::TerminalNode *SHA();
    antlr4::tree::TerminalNode *SHA1();
    antlr4::tree::TerminalNode *SHA2();
    antlr4::tree::TerminalNode *SIGN();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SLEEP();
    antlr4::tree::TerminalNode *SOUNDEX();
    antlr4::tree::TerminalNode *SQL_THREAD_WAIT_AFTER_GTIDS();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *SRID();
    antlr4::tree::TerminalNode *STARTPOINT();
    antlr4::tree::TerminalNode *STRCMP();
    antlr4::tree::TerminalNode *STR_TO_DATE();
    antlr4::tree::TerminalNode *ST_AREA();
    antlr4::tree::TerminalNode *ST_ASBINARY();
    antlr4::tree::TerminalNode *ST_ASTEXT();
    antlr4::tree::TerminalNode *ST_ASWKB();
    antlr4::tree::TerminalNode *ST_ASWKT();
    antlr4::tree::TerminalNode *ST_BUFFER();
    antlr4::tree::TerminalNode *ST_CENTROID();
    antlr4::tree::TerminalNode *ST_CONTAINS();
    antlr4::tree::TerminalNode *ST_CROSSES();
    antlr4::tree::TerminalNode *ST_DIFFERENCE();
    antlr4::tree::TerminalNode *ST_DIMENSION();
    antlr4::tree::TerminalNode *ST_DISJOINT();
    antlr4::tree::TerminalNode *ST_DISTANCE();
    antlr4::tree::TerminalNode *ST_ENDPOINT();
    antlr4::tree::TerminalNode *ST_ENVELOPE();
    antlr4::tree::TerminalNode *ST_EQUALS();
    antlr4::tree::TerminalNode *ST_EXTERIORRING();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMTXT();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYCOLLECTIONFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMETRYCOLLECTIONFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMETRYFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYN();
    antlr4::tree::TerminalNode *ST_GEOMETRYTYPE();
    antlr4::tree::TerminalNode *ST_GEOMFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMFROMWKB();
    antlr4::tree::TerminalNode *ST_INTERIORRINGN();
    antlr4::tree::TerminalNode *ST_INTERSECTION();
    antlr4::tree::TerminalNode *ST_INTERSECTS();
    antlr4::tree::TerminalNode *ST_ISCLOSED();
    antlr4::tree::TerminalNode *ST_ISEMPTY();
    antlr4::tree::TerminalNode *ST_ISSIMPLE();
    antlr4::tree::TerminalNode *ST_LINEFROMTEXT();
    antlr4::tree::TerminalNode *ST_LINEFROMWKB();
    antlr4::tree::TerminalNode *ST_LINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *ST_LINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *ST_NUMGEOMETRIES();
    antlr4::tree::TerminalNode *ST_NUMINTERIORRING();
    antlr4::tree::TerminalNode *ST_NUMINTERIORRINGS();
    antlr4::tree::TerminalNode *ST_NUMPOINTS();
    antlr4::tree::TerminalNode *ST_OVERLAPS();
    antlr4::tree::TerminalNode *ST_POINTFROMTEXT();
    antlr4::tree::TerminalNode *ST_POINTFROMWKB();
    antlr4::tree::TerminalNode *ST_POINTN();
    antlr4::tree::TerminalNode *ST_POLYFROMTEXT();
    antlr4::tree::TerminalNode *ST_POLYFROMWKB();
    antlr4::tree::TerminalNode *ST_POLYGONFROMTEXT();
    antlr4::tree::TerminalNode *ST_POLYGONFROMWKB();
    antlr4::tree::TerminalNode *ST_SRID();
    antlr4::tree::TerminalNode *ST_STARTPOINT();
    antlr4::tree::TerminalNode *ST_SYMDIFFERENCE();
    antlr4::tree::TerminalNode *ST_TOUCHES();
    antlr4::tree::TerminalNode *ST_UNION();
    antlr4::tree::TerminalNode *ST_WITHIN();
    antlr4::tree::TerminalNode *ST_X();
    antlr4::tree::TerminalNode *ST_Y();
    antlr4::tree::TerminalNode *SUBDATE();
    antlr4::tree::TerminalNode *SUBSTRING_INDEX();
    antlr4::tree::TerminalNode *SUBTIME();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEDIFF();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMESTAMPADD();
    antlr4::tree::TerminalNode *TIMESTAMPDIFF();
    antlr4::tree::TerminalNode *TIME_FORMAT();
    antlr4::tree::TerminalNode *TIME_TO_SEC();
    antlr4::tree::TerminalNode *TOUCHES();
    antlr4::tree::TerminalNode *TO_BASE64();
    antlr4::tree::TerminalNode *TO_DAYS();
    antlr4::tree::TerminalNode *TO_SECONDS();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UNCOMPRESS();
    antlr4::tree::TerminalNode *UNCOMPRESSED_LENGTH();
    antlr4::tree::TerminalNode *UNHEX();
    antlr4::tree::TerminalNode *UNIX_TIMESTAMP();
    antlr4::tree::TerminalNode *UPDATEXML();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *UUID();
    antlr4::tree::TerminalNode *UUID_SHORT();
    antlr4::tree::TerminalNode *VALIDATE_PASSWORD_STRENGTH();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *VISIBLE();
    antlr4::tree::TerminalNode *WAIT_UNTIL_SQL_THREAD_AFTER_GTIDS();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WEEKDAY();
    antlr4::tree::TerminalNode *WEEKOFYEAR();
    antlr4::tree::TerminalNode *WEIGHT_STRING();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARWEEK();
    antlr4::tree::TerminalNode *Y_FUNCTION();
    antlr4::tree::TerminalNode *X_FUNCTION();
    antlr4::tree::TerminalNode *JSON_ARRAY();
    antlr4::tree::TerminalNode *JSON_OBJECT();
    antlr4::tree::TerminalNode *JSON_QUOTE();
    antlr4::tree::TerminalNode *JSON_CONTAINS();
    antlr4::tree::TerminalNode *JSON_CONTAINS_PATH();
    antlr4::tree::TerminalNode *JSON_EXTRACT();
    antlr4::tree::TerminalNode *JSON_KEYS();
    antlr4::tree::TerminalNode *JSON_OVERLAPS();
    antlr4::tree::TerminalNode *JSON_SEARCH();
    antlr4::tree::TerminalNode *JSON_VALUE();
    antlr4::tree::TerminalNode *JSON_ARRAY_APPEND();
    antlr4::tree::TerminalNode *JSON_ARRAY_INSERT();
    antlr4::tree::TerminalNode *JSON_INSERT();
    antlr4::tree::TerminalNode *JSON_MERGE();
    antlr4::tree::TerminalNode *JSON_MERGE_PATCH();
    antlr4::tree::TerminalNode *JSON_MERGE_PRESERVE();
    antlr4::tree::TerminalNode *JSON_REMOVE();
    antlr4::tree::TerminalNode *JSON_REPLACE();
    antlr4::tree::TerminalNode *JSON_SET();
    antlr4::tree::TerminalNode *JSON_UNQUOTE();
    antlr4::tree::TerminalNode *JSON_DEPTH();
    antlr4::tree::TerminalNode *JSON_LENGTH();
    antlr4::tree::TerminalNode *JSON_TYPE();
    antlr4::tree::TerminalNode *JSON_VALID();
    antlr4::tree::TerminalNode *JSON_TABLE();
    antlr4::tree::TerminalNode *JSON_SCHEMA_VALID();
    antlr4::tree::TerminalNode *JSON_SCHEMA_VALIDATION_REPORT();
    antlr4::tree::TerminalNode *JSON_PRETTY();
    antlr4::tree::TerminalNode *JSON_STORAGE_FREE();
    antlr4::tree::TerminalNode *JSON_STORAGE_SIZE();
    antlr4::tree::TerminalNode *JSON_ARRAYAGG();
    antlr4::tree::TerminalNode *JSON_OBJECTAGG();

   
  };

  FunctionNameBaseContext* functionNameBase();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool predicateSempred(PredicateContext *_localctx, size_t predicateIndex);
  bool expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

