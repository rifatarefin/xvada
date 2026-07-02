// Generated from MySql.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link MySqlParser}.
 */
public interface MySqlListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link MySqlParser#root}.
	 * @param ctx the parse tree
	 */
	void enterRoot(MySqlParser.RootContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#root}.
	 * @param ctx the parse tree
	 */
	void exitRoot(MySqlParser.RootContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#sqlStatements}.
	 * @param ctx the parse tree
	 */
	void enterSqlStatements(MySqlParser.SqlStatementsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#sqlStatements}.
	 * @param ctx the parse tree
	 */
	void exitSqlStatements(MySqlParser.SqlStatementsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#sqlStatement}.
	 * @param ctx the parse tree
	 */
	void enterSqlStatement(MySqlParser.SqlStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#sqlStatement}.
	 * @param ctx the parse tree
	 */
	void exitSqlStatement(MySqlParser.SqlStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#emptyStatement}.
	 * @param ctx the parse tree
	 */
	void enterEmptyStatement(MySqlParser.EmptyStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#emptyStatement}.
	 * @param ctx the parse tree
	 */
	void exitEmptyStatement(MySqlParser.EmptyStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#ddlStatement}.
	 * @param ctx the parse tree
	 */
	void enterDdlStatement(MySqlParser.DdlStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#ddlStatement}.
	 * @param ctx the parse tree
	 */
	void exitDdlStatement(MySqlParser.DdlStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dmlStatement}.
	 * @param ctx the parse tree
	 */
	void enterDmlStatement(MySqlParser.DmlStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dmlStatement}.
	 * @param ctx the parse tree
	 */
	void exitDmlStatement(MySqlParser.DmlStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#transactionStatement}.
	 * @param ctx the parse tree
	 */
	void enterTransactionStatement(MySqlParser.TransactionStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#transactionStatement}.
	 * @param ctx the parse tree
	 */
	void exitTransactionStatement(MySqlParser.TransactionStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#replicationStatement}.
	 * @param ctx the parse tree
	 */
	void enterReplicationStatement(MySqlParser.ReplicationStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#replicationStatement}.
	 * @param ctx the parse tree
	 */
	void exitReplicationStatement(MySqlParser.ReplicationStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#preparedStatement}.
	 * @param ctx the parse tree
	 */
	void enterPreparedStatement(MySqlParser.PreparedStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#preparedStatement}.
	 * @param ctx the parse tree
	 */
	void exitPreparedStatement(MySqlParser.PreparedStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#compoundStatement}.
	 * @param ctx the parse tree
	 */
	void enterCompoundStatement(MySqlParser.CompoundStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#compoundStatement}.
	 * @param ctx the parse tree
	 */
	void exitCompoundStatement(MySqlParser.CompoundStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#administrationStatement}.
	 * @param ctx the parse tree
	 */
	void enterAdministrationStatement(MySqlParser.AdministrationStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#administrationStatement}.
	 * @param ctx the parse tree
	 */
	void exitAdministrationStatement(MySqlParser.AdministrationStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#utilityStatement}.
	 * @param ctx the parse tree
	 */
	void enterUtilityStatement(MySqlParser.UtilityStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#utilityStatement}.
	 * @param ctx the parse tree
	 */
	void exitUtilityStatement(MySqlParser.UtilityStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createDatabase}.
	 * @param ctx the parse tree
	 */
	void enterCreateDatabase(MySqlParser.CreateDatabaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createDatabase}.
	 * @param ctx the parse tree
	 */
	void exitCreateDatabase(MySqlParser.CreateDatabaseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createEvent}.
	 * @param ctx the parse tree
	 */
	void enterCreateEvent(MySqlParser.CreateEventContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createEvent}.
	 * @param ctx the parse tree
	 */
	void exitCreateEvent(MySqlParser.CreateEventContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createIndex}.
	 * @param ctx the parse tree
	 */
	void enterCreateIndex(MySqlParser.CreateIndexContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createIndex}.
	 * @param ctx the parse tree
	 */
	void exitCreateIndex(MySqlParser.CreateIndexContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createLogfileGroup}.
	 * @param ctx the parse tree
	 */
	void enterCreateLogfileGroup(MySqlParser.CreateLogfileGroupContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createLogfileGroup}.
	 * @param ctx the parse tree
	 */
	void exitCreateLogfileGroup(MySqlParser.CreateLogfileGroupContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createProcedure}.
	 * @param ctx the parse tree
	 */
	void enterCreateProcedure(MySqlParser.CreateProcedureContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createProcedure}.
	 * @param ctx the parse tree
	 */
	void exitCreateProcedure(MySqlParser.CreateProcedureContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createFunction}.
	 * @param ctx the parse tree
	 */
	void enterCreateFunction(MySqlParser.CreateFunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createFunction}.
	 * @param ctx the parse tree
	 */
	void exitCreateFunction(MySqlParser.CreateFunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createServer}.
	 * @param ctx the parse tree
	 */
	void enterCreateServer(MySqlParser.CreateServerContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createServer}.
	 * @param ctx the parse tree
	 */
	void exitCreateServer(MySqlParser.CreateServerContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createTable}.
	 * @param ctx the parse tree
	 */
	void enterCreateTable(MySqlParser.CreateTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createTable}.
	 * @param ctx the parse tree
	 */
	void exitCreateTable(MySqlParser.CreateTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createTablespaceInnodb}.
	 * @param ctx the parse tree
	 */
	void enterCreateTablespaceInnodb(MySqlParser.CreateTablespaceInnodbContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createTablespaceInnodb}.
	 * @param ctx the parse tree
	 */
	void exitCreateTablespaceInnodb(MySqlParser.CreateTablespaceInnodbContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createTablespaceNdb}.
	 * @param ctx the parse tree
	 */
	void enterCreateTablespaceNdb(MySqlParser.CreateTablespaceNdbContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createTablespaceNdb}.
	 * @param ctx the parse tree
	 */
	void exitCreateTablespaceNdb(MySqlParser.CreateTablespaceNdbContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createTrigger}.
	 * @param ctx the parse tree
	 */
	void enterCreateTrigger(MySqlParser.CreateTriggerContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createTrigger}.
	 * @param ctx the parse tree
	 */
	void exitCreateTrigger(MySqlParser.CreateTriggerContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createView}.
	 * @param ctx the parse tree
	 */
	void enterCreateView(MySqlParser.CreateViewContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createView}.
	 * @param ctx the parse tree
	 */
	void exitCreateView(MySqlParser.CreateViewContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createDatabaseOption}.
	 * @param ctx the parse tree
	 */
	void enterCreateDatabaseOption(MySqlParser.CreateDatabaseOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createDatabaseOption}.
	 * @param ctx the parse tree
	 */
	void exitCreateDatabaseOption(MySqlParser.CreateDatabaseOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#ownerStatement}.
	 * @param ctx the parse tree
	 */
	void enterOwnerStatement(MySqlParser.OwnerStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#ownerStatement}.
	 * @param ctx the parse tree
	 */
	void exitOwnerStatement(MySqlParser.OwnerStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#scheduleExpression}.
	 * @param ctx the parse tree
	 */
	void enterScheduleExpression(MySqlParser.ScheduleExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#scheduleExpression}.
	 * @param ctx the parse tree
	 */
	void exitScheduleExpression(MySqlParser.ScheduleExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#timestampValue}.
	 * @param ctx the parse tree
	 */
	void enterTimestampValue(MySqlParser.TimestampValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#timestampValue}.
	 * @param ctx the parse tree
	 */
	void exitTimestampValue(MySqlParser.TimestampValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#intervalExpr}.
	 * @param ctx the parse tree
	 */
	void enterIntervalExpr(MySqlParser.IntervalExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#intervalExpr}.
	 * @param ctx the parse tree
	 */
	void exitIntervalExpr(MySqlParser.IntervalExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#intervalType}.
	 * @param ctx the parse tree
	 */
	void enterIntervalType(MySqlParser.IntervalTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#intervalType}.
	 * @param ctx the parse tree
	 */
	void exitIntervalType(MySqlParser.IntervalTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#enableType}.
	 * @param ctx the parse tree
	 */
	void enterEnableType(MySqlParser.EnableTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#enableType}.
	 * @param ctx the parse tree
	 */
	void exitEnableType(MySqlParser.EnableTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#indexType}.
	 * @param ctx the parse tree
	 */
	void enterIndexType(MySqlParser.IndexTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#indexType}.
	 * @param ctx the parse tree
	 */
	void exitIndexType(MySqlParser.IndexTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#indexOption}.
	 * @param ctx the parse tree
	 */
	void enterIndexOption(MySqlParser.IndexOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#indexOption}.
	 * @param ctx the parse tree
	 */
	void exitIndexOption(MySqlParser.IndexOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#procedureParameter}.
	 * @param ctx the parse tree
	 */
	void enterProcedureParameter(MySqlParser.ProcedureParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#procedureParameter}.
	 * @param ctx the parse tree
	 */
	void exitProcedureParameter(MySqlParser.ProcedureParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#functionParameter}.
	 * @param ctx the parse tree
	 */
	void enterFunctionParameter(MySqlParser.FunctionParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#functionParameter}.
	 * @param ctx the parse tree
	 */
	void exitFunctionParameter(MySqlParser.FunctionParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#routineOption}.
	 * @param ctx the parse tree
	 */
	void enterRoutineOption(MySqlParser.RoutineOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#routineOption}.
	 * @param ctx the parse tree
	 */
	void exitRoutineOption(MySqlParser.RoutineOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#serverOption}.
	 * @param ctx the parse tree
	 */
	void enterServerOption(MySqlParser.ServerOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#serverOption}.
	 * @param ctx the parse tree
	 */
	void exitServerOption(MySqlParser.ServerOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createDefinitions}.
	 * @param ctx the parse tree
	 */
	void enterCreateDefinitions(MySqlParser.CreateDefinitionsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createDefinitions}.
	 * @param ctx the parse tree
	 */
	void exitCreateDefinitions(MySqlParser.CreateDefinitionsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createDefinition}.
	 * @param ctx the parse tree
	 */
	void enterCreateDefinition(MySqlParser.CreateDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createDefinition}.
	 * @param ctx the parse tree
	 */
	void exitCreateDefinition(MySqlParser.CreateDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#columnDefinition}.
	 * @param ctx the parse tree
	 */
	void enterColumnDefinition(MySqlParser.ColumnDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#columnDefinition}.
	 * @param ctx the parse tree
	 */
	void exitColumnDefinition(MySqlParser.ColumnDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#columnConstraint}.
	 * @param ctx the parse tree
	 */
	void enterColumnConstraint(MySqlParser.ColumnConstraintContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#columnConstraint}.
	 * @param ctx the parse tree
	 */
	void exitColumnConstraint(MySqlParser.ColumnConstraintContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tableConstraint}.
	 * @param ctx the parse tree
	 */
	void enterTableConstraint(MySqlParser.TableConstraintContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tableConstraint}.
	 * @param ctx the parse tree
	 */
	void exitTableConstraint(MySqlParser.TableConstraintContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#referenceDefinition}.
	 * @param ctx the parse tree
	 */
	void enterReferenceDefinition(MySqlParser.ReferenceDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#referenceDefinition}.
	 * @param ctx the parse tree
	 */
	void exitReferenceDefinition(MySqlParser.ReferenceDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#referenceAction}.
	 * @param ctx the parse tree
	 */
	void enterReferenceAction(MySqlParser.ReferenceActionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#referenceAction}.
	 * @param ctx the parse tree
	 */
	void exitReferenceAction(MySqlParser.ReferenceActionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#referenceControlType}.
	 * @param ctx the parse tree
	 */
	void enterReferenceControlType(MySqlParser.ReferenceControlTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#referenceControlType}.
	 * @param ctx the parse tree
	 */
	void exitReferenceControlType(MySqlParser.ReferenceControlTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#indexColumnDefinition}.
	 * @param ctx the parse tree
	 */
	void enterIndexColumnDefinition(MySqlParser.IndexColumnDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#indexColumnDefinition}.
	 * @param ctx the parse tree
	 */
	void exitIndexColumnDefinition(MySqlParser.IndexColumnDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tableOption}.
	 * @param ctx the parse tree
	 */
	void enterTableOption(MySqlParser.TableOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tableOption}.
	 * @param ctx the parse tree
	 */
	void exitTableOption(MySqlParser.TableOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tablespaceStorage}.
	 * @param ctx the parse tree
	 */
	void enterTablespaceStorage(MySqlParser.TablespaceStorageContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tablespaceStorage}.
	 * @param ctx the parse tree
	 */
	void exitTablespaceStorage(MySqlParser.TablespaceStorageContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#partitionDefinitions}.
	 * @param ctx the parse tree
	 */
	void enterPartitionDefinitions(MySqlParser.PartitionDefinitionsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#partitionDefinitions}.
	 * @param ctx the parse tree
	 */
	void exitPartitionDefinitions(MySqlParser.PartitionDefinitionsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#partitionFunctionDefinition}.
	 * @param ctx the parse tree
	 */
	void enterPartitionFunctionDefinition(MySqlParser.PartitionFunctionDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#partitionFunctionDefinition}.
	 * @param ctx the parse tree
	 */
	void exitPartitionFunctionDefinition(MySqlParser.PartitionFunctionDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#subpartitionFunctionDefinition}.
	 * @param ctx the parse tree
	 */
	void enterSubpartitionFunctionDefinition(MySqlParser.SubpartitionFunctionDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#subpartitionFunctionDefinition}.
	 * @param ctx the parse tree
	 */
	void exitSubpartitionFunctionDefinition(MySqlParser.SubpartitionFunctionDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#partitionDefinition}.
	 * @param ctx the parse tree
	 */
	void enterPartitionDefinition(MySqlParser.PartitionDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#partitionDefinition}.
	 * @param ctx the parse tree
	 */
	void exitPartitionDefinition(MySqlParser.PartitionDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#partitionDefinerAtom}.
	 * @param ctx the parse tree
	 */
	void enterPartitionDefinerAtom(MySqlParser.PartitionDefinerAtomContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#partitionDefinerAtom}.
	 * @param ctx the parse tree
	 */
	void exitPartitionDefinerAtom(MySqlParser.PartitionDefinerAtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#partitionDefinerVector}.
	 * @param ctx the parse tree
	 */
	void enterPartitionDefinerVector(MySqlParser.PartitionDefinerVectorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#partitionDefinerVector}.
	 * @param ctx the parse tree
	 */
	void exitPartitionDefinerVector(MySqlParser.PartitionDefinerVectorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#subpartitionDefinition}.
	 * @param ctx the parse tree
	 */
	void enterSubpartitionDefinition(MySqlParser.SubpartitionDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#subpartitionDefinition}.
	 * @param ctx the parse tree
	 */
	void exitSubpartitionDefinition(MySqlParser.SubpartitionDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#partitionOption}.
	 * @param ctx the parse tree
	 */
	void enterPartitionOption(MySqlParser.PartitionOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#partitionOption}.
	 * @param ctx the parse tree
	 */
	void exitPartitionOption(MySqlParser.PartitionOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterDatabase}.
	 * @param ctx the parse tree
	 */
	void enterAlterDatabase(MySqlParser.AlterDatabaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterDatabase}.
	 * @param ctx the parse tree
	 */
	void exitAlterDatabase(MySqlParser.AlterDatabaseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterEvent}.
	 * @param ctx the parse tree
	 */
	void enterAlterEvent(MySqlParser.AlterEventContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterEvent}.
	 * @param ctx the parse tree
	 */
	void exitAlterEvent(MySqlParser.AlterEventContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterFunction}.
	 * @param ctx the parse tree
	 */
	void enterAlterFunction(MySqlParser.AlterFunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterFunction}.
	 * @param ctx the parse tree
	 */
	void exitAlterFunction(MySqlParser.AlterFunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterInstance}.
	 * @param ctx the parse tree
	 */
	void enterAlterInstance(MySqlParser.AlterInstanceContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterInstance}.
	 * @param ctx the parse tree
	 */
	void exitAlterInstance(MySqlParser.AlterInstanceContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterLogfileGroup}.
	 * @param ctx the parse tree
	 */
	void enterAlterLogfileGroup(MySqlParser.AlterLogfileGroupContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterLogfileGroup}.
	 * @param ctx the parse tree
	 */
	void exitAlterLogfileGroup(MySqlParser.AlterLogfileGroupContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterProcedure}.
	 * @param ctx the parse tree
	 */
	void enterAlterProcedure(MySqlParser.AlterProcedureContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterProcedure}.
	 * @param ctx the parse tree
	 */
	void exitAlterProcedure(MySqlParser.AlterProcedureContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterServer}.
	 * @param ctx the parse tree
	 */
	void enterAlterServer(MySqlParser.AlterServerContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterServer}.
	 * @param ctx the parse tree
	 */
	void exitAlterServer(MySqlParser.AlterServerContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterTable}.
	 * @param ctx the parse tree
	 */
	void enterAlterTable(MySqlParser.AlterTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterTable}.
	 * @param ctx the parse tree
	 */
	void exitAlterTable(MySqlParser.AlterTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterTablespace}.
	 * @param ctx the parse tree
	 */
	void enterAlterTablespace(MySqlParser.AlterTablespaceContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterTablespace}.
	 * @param ctx the parse tree
	 */
	void exitAlterTablespace(MySqlParser.AlterTablespaceContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterView}.
	 * @param ctx the parse tree
	 */
	void enterAlterView(MySqlParser.AlterViewContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterView}.
	 * @param ctx the parse tree
	 */
	void exitAlterView(MySqlParser.AlterViewContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterSpecification}.
	 * @param ctx the parse tree
	 */
	void enterAlterSpecification(MySqlParser.AlterSpecificationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterSpecification}.
	 * @param ctx the parse tree
	 */
	void exitAlterSpecification(MySqlParser.AlterSpecificationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropDatabase}.
	 * @param ctx the parse tree
	 */
	void enterDropDatabase(MySqlParser.DropDatabaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropDatabase}.
	 * @param ctx the parse tree
	 */
	void exitDropDatabase(MySqlParser.DropDatabaseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropEvent}.
	 * @param ctx the parse tree
	 */
	void enterDropEvent(MySqlParser.DropEventContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropEvent}.
	 * @param ctx the parse tree
	 */
	void exitDropEvent(MySqlParser.DropEventContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropIndex}.
	 * @param ctx the parse tree
	 */
	void enterDropIndex(MySqlParser.DropIndexContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropIndex}.
	 * @param ctx the parse tree
	 */
	void exitDropIndex(MySqlParser.DropIndexContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropLogfileGroup}.
	 * @param ctx the parse tree
	 */
	void enterDropLogfileGroup(MySqlParser.DropLogfileGroupContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropLogfileGroup}.
	 * @param ctx the parse tree
	 */
	void exitDropLogfileGroup(MySqlParser.DropLogfileGroupContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropProcedure}.
	 * @param ctx the parse tree
	 */
	void enterDropProcedure(MySqlParser.DropProcedureContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropProcedure}.
	 * @param ctx the parse tree
	 */
	void exitDropProcedure(MySqlParser.DropProcedureContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropFunction}.
	 * @param ctx the parse tree
	 */
	void enterDropFunction(MySqlParser.DropFunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropFunction}.
	 * @param ctx the parse tree
	 */
	void exitDropFunction(MySqlParser.DropFunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropServer}.
	 * @param ctx the parse tree
	 */
	void enterDropServer(MySqlParser.DropServerContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropServer}.
	 * @param ctx the parse tree
	 */
	void exitDropServer(MySqlParser.DropServerContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropTable}.
	 * @param ctx the parse tree
	 */
	void enterDropTable(MySqlParser.DropTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropTable}.
	 * @param ctx the parse tree
	 */
	void exitDropTable(MySqlParser.DropTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropTablespace}.
	 * @param ctx the parse tree
	 */
	void enterDropTablespace(MySqlParser.DropTablespaceContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropTablespace}.
	 * @param ctx the parse tree
	 */
	void exitDropTablespace(MySqlParser.DropTablespaceContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropTrigger}.
	 * @param ctx the parse tree
	 */
	void enterDropTrigger(MySqlParser.DropTriggerContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropTrigger}.
	 * @param ctx the parse tree
	 */
	void exitDropTrigger(MySqlParser.DropTriggerContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropView}.
	 * @param ctx the parse tree
	 */
	void enterDropView(MySqlParser.DropViewContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropView}.
	 * @param ctx the parse tree
	 */
	void exitDropView(MySqlParser.DropViewContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#renameTable}.
	 * @param ctx the parse tree
	 */
	void enterRenameTable(MySqlParser.RenameTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#renameTable}.
	 * @param ctx the parse tree
	 */
	void exitRenameTable(MySqlParser.RenameTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#renameTableClause}.
	 * @param ctx the parse tree
	 */
	void enterRenameTableClause(MySqlParser.RenameTableClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#renameTableClause}.
	 * @param ctx the parse tree
	 */
	void exitRenameTableClause(MySqlParser.RenameTableClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#truncateTable}.
	 * @param ctx the parse tree
	 */
	void enterTruncateTable(MySqlParser.TruncateTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#truncateTable}.
	 * @param ctx the parse tree
	 */
	void exitTruncateTable(MySqlParser.TruncateTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#callStatement}.
	 * @param ctx the parse tree
	 */
	void enterCallStatement(MySqlParser.CallStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#callStatement}.
	 * @param ctx the parse tree
	 */
	void exitCallStatement(MySqlParser.CallStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#deleteStatement}.
	 * @param ctx the parse tree
	 */
	void enterDeleteStatement(MySqlParser.DeleteStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#deleteStatement}.
	 * @param ctx the parse tree
	 */
	void exitDeleteStatement(MySqlParser.DeleteStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#doStatement}.
	 * @param ctx the parse tree
	 */
	void enterDoStatement(MySqlParser.DoStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#doStatement}.
	 * @param ctx the parse tree
	 */
	void exitDoStatement(MySqlParser.DoStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#handlerStatement}.
	 * @param ctx the parse tree
	 */
	void enterHandlerStatement(MySqlParser.HandlerStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#handlerStatement}.
	 * @param ctx the parse tree
	 */
	void exitHandlerStatement(MySqlParser.HandlerStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#insertStatement}.
	 * @param ctx the parse tree
	 */
	void enterInsertStatement(MySqlParser.InsertStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#insertStatement}.
	 * @param ctx the parse tree
	 */
	void exitInsertStatement(MySqlParser.InsertStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#loadDataStatement}.
	 * @param ctx the parse tree
	 */
	void enterLoadDataStatement(MySqlParser.LoadDataStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#loadDataStatement}.
	 * @param ctx the parse tree
	 */
	void exitLoadDataStatement(MySqlParser.LoadDataStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#loadXmlStatement}.
	 * @param ctx the parse tree
	 */
	void enterLoadXmlStatement(MySqlParser.LoadXmlStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#loadXmlStatement}.
	 * @param ctx the parse tree
	 */
	void exitLoadXmlStatement(MySqlParser.LoadXmlStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#replaceStatement}.
	 * @param ctx the parse tree
	 */
	void enterReplaceStatement(MySqlParser.ReplaceStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#replaceStatement}.
	 * @param ctx the parse tree
	 */
	void exitReplaceStatement(MySqlParser.ReplaceStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#selectStatement}.
	 * @param ctx the parse tree
	 */
	void enterSelectStatement(MySqlParser.SelectStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#selectStatement}.
	 * @param ctx the parse tree
	 */
	void exitSelectStatement(MySqlParser.SelectStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#updateStatement}.
	 * @param ctx the parse tree
	 */
	void enterUpdateStatement(MySqlParser.UpdateStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#updateStatement}.
	 * @param ctx the parse tree
	 */
	void exitUpdateStatement(MySqlParser.UpdateStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#insertStatementValue}.
	 * @param ctx the parse tree
	 */
	void enterInsertStatementValue(MySqlParser.InsertStatementValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#insertStatementValue}.
	 * @param ctx the parse tree
	 */
	void exitInsertStatementValue(MySqlParser.InsertStatementValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#updatedElement}.
	 * @param ctx the parse tree
	 */
	void enterUpdatedElement(MySqlParser.UpdatedElementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#updatedElement}.
	 * @param ctx the parse tree
	 */
	void exitUpdatedElement(MySqlParser.UpdatedElementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#assignmentField}.
	 * @param ctx the parse tree
	 */
	void enterAssignmentField(MySqlParser.AssignmentFieldContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#assignmentField}.
	 * @param ctx the parse tree
	 */
	void exitAssignmentField(MySqlParser.AssignmentFieldContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#lockClause}.
	 * @param ctx the parse tree
	 */
	void enterLockClause(MySqlParser.LockClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#lockClause}.
	 * @param ctx the parse tree
	 */
	void exitLockClause(MySqlParser.LockClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#singleDeleteStatement}.
	 * @param ctx the parse tree
	 */
	void enterSingleDeleteStatement(MySqlParser.SingleDeleteStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#singleDeleteStatement}.
	 * @param ctx the parse tree
	 */
	void exitSingleDeleteStatement(MySqlParser.SingleDeleteStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#multipleDeleteStatement}.
	 * @param ctx the parse tree
	 */
	void enterMultipleDeleteStatement(MySqlParser.MultipleDeleteStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#multipleDeleteStatement}.
	 * @param ctx the parse tree
	 */
	void exitMultipleDeleteStatement(MySqlParser.MultipleDeleteStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#handlerOpenStatement}.
	 * @param ctx the parse tree
	 */
	void enterHandlerOpenStatement(MySqlParser.HandlerOpenStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#handlerOpenStatement}.
	 * @param ctx the parse tree
	 */
	void exitHandlerOpenStatement(MySqlParser.HandlerOpenStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#handlerReadIndexStatement}.
	 * @param ctx the parse tree
	 */
	void enterHandlerReadIndexStatement(MySqlParser.HandlerReadIndexStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#handlerReadIndexStatement}.
	 * @param ctx the parse tree
	 */
	void exitHandlerReadIndexStatement(MySqlParser.HandlerReadIndexStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#handlerReadStatement}.
	 * @param ctx the parse tree
	 */
	void enterHandlerReadStatement(MySqlParser.HandlerReadStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#handlerReadStatement}.
	 * @param ctx the parse tree
	 */
	void exitHandlerReadStatement(MySqlParser.HandlerReadStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#handlerCloseStatement}.
	 * @param ctx the parse tree
	 */
	void enterHandlerCloseStatement(MySqlParser.HandlerCloseStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#handlerCloseStatement}.
	 * @param ctx the parse tree
	 */
	void exitHandlerCloseStatement(MySqlParser.HandlerCloseStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#singleUpdateStatement}.
	 * @param ctx the parse tree
	 */
	void enterSingleUpdateStatement(MySqlParser.SingleUpdateStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#singleUpdateStatement}.
	 * @param ctx the parse tree
	 */
	void exitSingleUpdateStatement(MySqlParser.SingleUpdateStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#multipleUpdateStatement}.
	 * @param ctx the parse tree
	 */
	void enterMultipleUpdateStatement(MySqlParser.MultipleUpdateStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#multipleUpdateStatement}.
	 * @param ctx the parse tree
	 */
	void exitMultipleUpdateStatement(MySqlParser.MultipleUpdateStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#orderByClause}.
	 * @param ctx the parse tree
	 */
	void enterOrderByClause(MySqlParser.OrderByClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#orderByClause}.
	 * @param ctx the parse tree
	 */
	void exitOrderByClause(MySqlParser.OrderByClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#orderByExpression}.
	 * @param ctx the parse tree
	 */
	void enterOrderByExpression(MySqlParser.OrderByExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#orderByExpression}.
	 * @param ctx the parse tree
	 */
	void exitOrderByExpression(MySqlParser.OrderByExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tableSources}.
	 * @param ctx the parse tree
	 */
	void enterTableSources(MySqlParser.TableSourcesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tableSources}.
	 * @param ctx the parse tree
	 */
	void exitTableSources(MySqlParser.TableSourcesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tableSource}.
	 * @param ctx the parse tree
	 */
	void enterTableSource(MySqlParser.TableSourceContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tableSource}.
	 * @param ctx the parse tree
	 */
	void exitTableSource(MySqlParser.TableSourceContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tableSourceItem}.
	 * @param ctx the parse tree
	 */
	void enterTableSourceItem(MySqlParser.TableSourceItemContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tableSourceItem}.
	 * @param ctx the parse tree
	 */
	void exitTableSourceItem(MySqlParser.TableSourceItemContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#indexHint}.
	 * @param ctx the parse tree
	 */
	void enterIndexHint(MySqlParser.IndexHintContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#indexHint}.
	 * @param ctx the parse tree
	 */
	void exitIndexHint(MySqlParser.IndexHintContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#indexHintType}.
	 * @param ctx the parse tree
	 */
	void enterIndexHintType(MySqlParser.IndexHintTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#indexHintType}.
	 * @param ctx the parse tree
	 */
	void exitIndexHintType(MySqlParser.IndexHintTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#joinPart}.
	 * @param ctx the parse tree
	 */
	void enterJoinPart(MySqlParser.JoinPartContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#joinPart}.
	 * @param ctx the parse tree
	 */
	void exitJoinPart(MySqlParser.JoinPartContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#queryExpression}.
	 * @param ctx the parse tree
	 */
	void enterQueryExpression(MySqlParser.QueryExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#queryExpression}.
	 * @param ctx the parse tree
	 */
	void exitQueryExpression(MySqlParser.QueryExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#queryExpressionNointo}.
	 * @param ctx the parse tree
	 */
	void enterQueryExpressionNointo(MySqlParser.QueryExpressionNointoContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#queryExpressionNointo}.
	 * @param ctx the parse tree
	 */
	void exitQueryExpressionNointo(MySqlParser.QueryExpressionNointoContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#querySpecification}.
	 * @param ctx the parse tree
	 */
	void enterQuerySpecification(MySqlParser.QuerySpecificationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#querySpecification}.
	 * @param ctx the parse tree
	 */
	void exitQuerySpecification(MySqlParser.QuerySpecificationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#querySpecificationNointo}.
	 * @param ctx the parse tree
	 */
	void enterQuerySpecificationNointo(MySqlParser.QuerySpecificationNointoContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#querySpecificationNointo}.
	 * @param ctx the parse tree
	 */
	void exitQuerySpecificationNointo(MySqlParser.QuerySpecificationNointoContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#unionParenthesis}.
	 * @param ctx the parse tree
	 */
	void enterUnionParenthesis(MySqlParser.UnionParenthesisContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#unionParenthesis}.
	 * @param ctx the parse tree
	 */
	void exitUnionParenthesis(MySqlParser.UnionParenthesisContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#unionStatement}.
	 * @param ctx the parse tree
	 */
	void enterUnionStatement(MySqlParser.UnionStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#unionStatement}.
	 * @param ctx the parse tree
	 */
	void exitUnionStatement(MySqlParser.UnionStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#selectSpec}.
	 * @param ctx the parse tree
	 */
	void enterSelectSpec(MySqlParser.SelectSpecContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#selectSpec}.
	 * @param ctx the parse tree
	 */
	void exitSelectSpec(MySqlParser.SelectSpecContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#selectElements}.
	 * @param ctx the parse tree
	 */
	void enterSelectElements(MySqlParser.SelectElementsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#selectElements}.
	 * @param ctx the parse tree
	 */
	void exitSelectElements(MySqlParser.SelectElementsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#selectElement}.
	 * @param ctx the parse tree
	 */
	void enterSelectElement(MySqlParser.SelectElementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#selectElement}.
	 * @param ctx the parse tree
	 */
	void exitSelectElement(MySqlParser.SelectElementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#selectIntoExpression}.
	 * @param ctx the parse tree
	 */
	void enterSelectIntoExpression(MySqlParser.SelectIntoExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#selectIntoExpression}.
	 * @param ctx the parse tree
	 */
	void exitSelectIntoExpression(MySqlParser.SelectIntoExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#selectFieldsInto}.
	 * @param ctx the parse tree
	 */
	void enterSelectFieldsInto(MySqlParser.SelectFieldsIntoContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#selectFieldsInto}.
	 * @param ctx the parse tree
	 */
	void exitSelectFieldsInto(MySqlParser.SelectFieldsIntoContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#selectLinesInto}.
	 * @param ctx the parse tree
	 */
	void enterSelectLinesInto(MySqlParser.SelectLinesIntoContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#selectLinesInto}.
	 * @param ctx the parse tree
	 */
	void exitSelectLinesInto(MySqlParser.SelectLinesIntoContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#fromClause}.
	 * @param ctx the parse tree
	 */
	void enterFromClause(MySqlParser.FromClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#fromClause}.
	 * @param ctx the parse tree
	 */
	void exitFromClause(MySqlParser.FromClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#groupByClause}.
	 * @param ctx the parse tree
	 */
	void enterGroupByClause(MySqlParser.GroupByClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#groupByClause}.
	 * @param ctx the parse tree
	 */
	void exitGroupByClause(MySqlParser.GroupByClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#havingClause}.
	 * @param ctx the parse tree
	 */
	void enterHavingClause(MySqlParser.HavingClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#havingClause}.
	 * @param ctx the parse tree
	 */
	void exitHavingClause(MySqlParser.HavingClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#groupByItem}.
	 * @param ctx the parse tree
	 */
	void enterGroupByItem(MySqlParser.GroupByItemContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#groupByItem}.
	 * @param ctx the parse tree
	 */
	void exitGroupByItem(MySqlParser.GroupByItemContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#limitClause}.
	 * @param ctx the parse tree
	 */
	void enterLimitClause(MySqlParser.LimitClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#limitClause}.
	 * @param ctx the parse tree
	 */
	void exitLimitClause(MySqlParser.LimitClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#limitClauseAtom}.
	 * @param ctx the parse tree
	 */
	void enterLimitClauseAtom(MySqlParser.LimitClauseAtomContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#limitClauseAtom}.
	 * @param ctx the parse tree
	 */
	void exitLimitClauseAtom(MySqlParser.LimitClauseAtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#startTransaction}.
	 * @param ctx the parse tree
	 */
	void enterStartTransaction(MySqlParser.StartTransactionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#startTransaction}.
	 * @param ctx the parse tree
	 */
	void exitStartTransaction(MySqlParser.StartTransactionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#beginWork}.
	 * @param ctx the parse tree
	 */
	void enterBeginWork(MySqlParser.BeginWorkContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#beginWork}.
	 * @param ctx the parse tree
	 */
	void exitBeginWork(MySqlParser.BeginWorkContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#commitWork}.
	 * @param ctx the parse tree
	 */
	void enterCommitWork(MySqlParser.CommitWorkContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#commitWork}.
	 * @param ctx the parse tree
	 */
	void exitCommitWork(MySqlParser.CommitWorkContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#rollbackWork}.
	 * @param ctx the parse tree
	 */
	void enterRollbackWork(MySqlParser.RollbackWorkContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#rollbackWork}.
	 * @param ctx the parse tree
	 */
	void exitRollbackWork(MySqlParser.RollbackWorkContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#savepointStatement}.
	 * @param ctx the parse tree
	 */
	void enterSavepointStatement(MySqlParser.SavepointStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#savepointStatement}.
	 * @param ctx the parse tree
	 */
	void exitSavepointStatement(MySqlParser.SavepointStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#rollbackStatement}.
	 * @param ctx the parse tree
	 */
	void enterRollbackStatement(MySqlParser.RollbackStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#rollbackStatement}.
	 * @param ctx the parse tree
	 */
	void exitRollbackStatement(MySqlParser.RollbackStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#releaseStatement}.
	 * @param ctx the parse tree
	 */
	void enterReleaseStatement(MySqlParser.ReleaseStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#releaseStatement}.
	 * @param ctx the parse tree
	 */
	void exitReleaseStatement(MySqlParser.ReleaseStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#lockTables}.
	 * @param ctx the parse tree
	 */
	void enterLockTables(MySqlParser.LockTablesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#lockTables}.
	 * @param ctx the parse tree
	 */
	void exitLockTables(MySqlParser.LockTablesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#unlockTables}.
	 * @param ctx the parse tree
	 */
	void enterUnlockTables(MySqlParser.UnlockTablesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#unlockTables}.
	 * @param ctx the parse tree
	 */
	void exitUnlockTables(MySqlParser.UnlockTablesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#setAutocommitStatement}.
	 * @param ctx the parse tree
	 */
	void enterSetAutocommitStatement(MySqlParser.SetAutocommitStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#setAutocommitStatement}.
	 * @param ctx the parse tree
	 */
	void exitSetAutocommitStatement(MySqlParser.SetAutocommitStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#setTransactionStatement}.
	 * @param ctx the parse tree
	 */
	void enterSetTransactionStatement(MySqlParser.SetTransactionStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#setTransactionStatement}.
	 * @param ctx the parse tree
	 */
	void exitSetTransactionStatement(MySqlParser.SetTransactionStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#transactionMode}.
	 * @param ctx the parse tree
	 */
	void enterTransactionMode(MySqlParser.TransactionModeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#transactionMode}.
	 * @param ctx the parse tree
	 */
	void exitTransactionMode(MySqlParser.TransactionModeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#lockTableElement}.
	 * @param ctx the parse tree
	 */
	void enterLockTableElement(MySqlParser.LockTableElementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#lockTableElement}.
	 * @param ctx the parse tree
	 */
	void exitLockTableElement(MySqlParser.LockTableElementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#lockAction}.
	 * @param ctx the parse tree
	 */
	void enterLockAction(MySqlParser.LockActionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#lockAction}.
	 * @param ctx the parse tree
	 */
	void exitLockAction(MySqlParser.LockActionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#transactionOption}.
	 * @param ctx the parse tree
	 */
	void enterTransactionOption(MySqlParser.TransactionOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#transactionOption}.
	 * @param ctx the parse tree
	 */
	void exitTransactionOption(MySqlParser.TransactionOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#transactionLevel}.
	 * @param ctx the parse tree
	 */
	void enterTransactionLevel(MySqlParser.TransactionLevelContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#transactionLevel}.
	 * @param ctx the parse tree
	 */
	void exitTransactionLevel(MySqlParser.TransactionLevelContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#changeMaster}.
	 * @param ctx the parse tree
	 */
	void enterChangeMaster(MySqlParser.ChangeMasterContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#changeMaster}.
	 * @param ctx the parse tree
	 */
	void exitChangeMaster(MySqlParser.ChangeMasterContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#changeReplicationFilter}.
	 * @param ctx the parse tree
	 */
	void enterChangeReplicationFilter(MySqlParser.ChangeReplicationFilterContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#changeReplicationFilter}.
	 * @param ctx the parse tree
	 */
	void exitChangeReplicationFilter(MySqlParser.ChangeReplicationFilterContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#purgeBinaryLogs}.
	 * @param ctx the parse tree
	 */
	void enterPurgeBinaryLogs(MySqlParser.PurgeBinaryLogsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#purgeBinaryLogs}.
	 * @param ctx the parse tree
	 */
	void exitPurgeBinaryLogs(MySqlParser.PurgeBinaryLogsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#resetMaster}.
	 * @param ctx the parse tree
	 */
	void enterResetMaster(MySqlParser.ResetMasterContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#resetMaster}.
	 * @param ctx the parse tree
	 */
	void exitResetMaster(MySqlParser.ResetMasterContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#resetSlave}.
	 * @param ctx the parse tree
	 */
	void enterResetSlave(MySqlParser.ResetSlaveContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#resetSlave}.
	 * @param ctx the parse tree
	 */
	void exitResetSlave(MySqlParser.ResetSlaveContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#startSlave}.
	 * @param ctx the parse tree
	 */
	void enterStartSlave(MySqlParser.StartSlaveContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#startSlave}.
	 * @param ctx the parse tree
	 */
	void exitStartSlave(MySqlParser.StartSlaveContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#stopSlave}.
	 * @param ctx the parse tree
	 */
	void enterStopSlave(MySqlParser.StopSlaveContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#stopSlave}.
	 * @param ctx the parse tree
	 */
	void exitStopSlave(MySqlParser.StopSlaveContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#startGroupReplication}.
	 * @param ctx the parse tree
	 */
	void enterStartGroupReplication(MySqlParser.StartGroupReplicationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#startGroupReplication}.
	 * @param ctx the parse tree
	 */
	void exitStartGroupReplication(MySqlParser.StartGroupReplicationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#stopGroupReplication}.
	 * @param ctx the parse tree
	 */
	void enterStopGroupReplication(MySqlParser.StopGroupReplicationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#stopGroupReplication}.
	 * @param ctx the parse tree
	 */
	void exitStopGroupReplication(MySqlParser.StopGroupReplicationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#masterOption}.
	 * @param ctx the parse tree
	 */
	void enterMasterOption(MySqlParser.MasterOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#masterOption}.
	 * @param ctx the parse tree
	 */
	void exitMasterOption(MySqlParser.MasterOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#stringMasterOption}.
	 * @param ctx the parse tree
	 */
	void enterStringMasterOption(MySqlParser.StringMasterOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#stringMasterOption}.
	 * @param ctx the parse tree
	 */
	void exitStringMasterOption(MySqlParser.StringMasterOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#decimalMasterOption}.
	 * @param ctx the parse tree
	 */
	void enterDecimalMasterOption(MySqlParser.DecimalMasterOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#decimalMasterOption}.
	 * @param ctx the parse tree
	 */
	void exitDecimalMasterOption(MySqlParser.DecimalMasterOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#boolMasterOption}.
	 * @param ctx the parse tree
	 */
	void enterBoolMasterOption(MySqlParser.BoolMasterOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#boolMasterOption}.
	 * @param ctx the parse tree
	 */
	void exitBoolMasterOption(MySqlParser.BoolMasterOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#channelOption}.
	 * @param ctx the parse tree
	 */
	void enterChannelOption(MySqlParser.ChannelOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#channelOption}.
	 * @param ctx the parse tree
	 */
	void exitChannelOption(MySqlParser.ChannelOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#replicationFilter}.
	 * @param ctx the parse tree
	 */
	void enterReplicationFilter(MySqlParser.ReplicationFilterContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#replicationFilter}.
	 * @param ctx the parse tree
	 */
	void exitReplicationFilter(MySqlParser.ReplicationFilterContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tablePair}.
	 * @param ctx the parse tree
	 */
	void enterTablePair(MySqlParser.TablePairContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tablePair}.
	 * @param ctx the parse tree
	 */
	void exitTablePair(MySqlParser.TablePairContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#threadType}.
	 * @param ctx the parse tree
	 */
	void enterThreadType(MySqlParser.ThreadTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#threadType}.
	 * @param ctx the parse tree
	 */
	void exitThreadType(MySqlParser.ThreadTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#untilOption}.
	 * @param ctx the parse tree
	 */
	void enterUntilOption(MySqlParser.UntilOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#untilOption}.
	 * @param ctx the parse tree
	 */
	void exitUntilOption(MySqlParser.UntilOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#connectionOption}.
	 * @param ctx the parse tree
	 */
	void enterConnectionOption(MySqlParser.ConnectionOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#connectionOption}.
	 * @param ctx the parse tree
	 */
	void exitConnectionOption(MySqlParser.ConnectionOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#gtuidSet}.
	 * @param ctx the parse tree
	 */
	void enterGtuidSet(MySqlParser.GtuidSetContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#gtuidSet}.
	 * @param ctx the parse tree
	 */
	void exitGtuidSet(MySqlParser.GtuidSetContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#xaStartTransaction}.
	 * @param ctx the parse tree
	 */
	void enterXaStartTransaction(MySqlParser.XaStartTransactionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#xaStartTransaction}.
	 * @param ctx the parse tree
	 */
	void exitXaStartTransaction(MySqlParser.XaStartTransactionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#xaEndTransaction}.
	 * @param ctx the parse tree
	 */
	void enterXaEndTransaction(MySqlParser.XaEndTransactionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#xaEndTransaction}.
	 * @param ctx the parse tree
	 */
	void exitXaEndTransaction(MySqlParser.XaEndTransactionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#xaPrepareStatement}.
	 * @param ctx the parse tree
	 */
	void enterXaPrepareStatement(MySqlParser.XaPrepareStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#xaPrepareStatement}.
	 * @param ctx the parse tree
	 */
	void exitXaPrepareStatement(MySqlParser.XaPrepareStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#xaCommitWork}.
	 * @param ctx the parse tree
	 */
	void enterXaCommitWork(MySqlParser.XaCommitWorkContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#xaCommitWork}.
	 * @param ctx the parse tree
	 */
	void exitXaCommitWork(MySqlParser.XaCommitWorkContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#xaRollbackWork}.
	 * @param ctx the parse tree
	 */
	void enterXaRollbackWork(MySqlParser.XaRollbackWorkContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#xaRollbackWork}.
	 * @param ctx the parse tree
	 */
	void exitXaRollbackWork(MySqlParser.XaRollbackWorkContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#xaRecoverWork}.
	 * @param ctx the parse tree
	 */
	void enterXaRecoverWork(MySqlParser.XaRecoverWorkContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#xaRecoverWork}.
	 * @param ctx the parse tree
	 */
	void exitXaRecoverWork(MySqlParser.XaRecoverWorkContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#prepareStatement}.
	 * @param ctx the parse tree
	 */
	void enterPrepareStatement(MySqlParser.PrepareStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#prepareStatement}.
	 * @param ctx the parse tree
	 */
	void exitPrepareStatement(MySqlParser.PrepareStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#executeStatement}.
	 * @param ctx the parse tree
	 */
	void enterExecuteStatement(MySqlParser.ExecuteStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#executeStatement}.
	 * @param ctx the parse tree
	 */
	void exitExecuteStatement(MySqlParser.ExecuteStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#deallocatePrepare}.
	 * @param ctx the parse tree
	 */
	void enterDeallocatePrepare(MySqlParser.DeallocatePrepareContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#deallocatePrepare}.
	 * @param ctx the parse tree
	 */
	void exitDeallocatePrepare(MySqlParser.DeallocatePrepareContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#routineBody}.
	 * @param ctx the parse tree
	 */
	void enterRoutineBody(MySqlParser.RoutineBodyContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#routineBody}.
	 * @param ctx the parse tree
	 */
	void exitRoutineBody(MySqlParser.RoutineBodyContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#blockStatement}.
	 * @param ctx the parse tree
	 */
	void enterBlockStatement(MySqlParser.BlockStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#blockStatement}.
	 * @param ctx the parse tree
	 */
	void exitBlockStatement(MySqlParser.BlockStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#caseStatement}.
	 * @param ctx the parse tree
	 */
	void enterCaseStatement(MySqlParser.CaseStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#caseStatement}.
	 * @param ctx the parse tree
	 */
	void exitCaseStatement(MySqlParser.CaseStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void enterIfStatement(MySqlParser.IfStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void exitIfStatement(MySqlParser.IfStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#iterateStatement}.
	 * @param ctx the parse tree
	 */
	void enterIterateStatement(MySqlParser.IterateStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#iterateStatement}.
	 * @param ctx the parse tree
	 */
	void exitIterateStatement(MySqlParser.IterateStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#leaveStatement}.
	 * @param ctx the parse tree
	 */
	void enterLeaveStatement(MySqlParser.LeaveStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#leaveStatement}.
	 * @param ctx the parse tree
	 */
	void exitLeaveStatement(MySqlParser.LeaveStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#loopStatement}.
	 * @param ctx the parse tree
	 */
	void enterLoopStatement(MySqlParser.LoopStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#loopStatement}.
	 * @param ctx the parse tree
	 */
	void exitLoopStatement(MySqlParser.LoopStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#repeatStatement}.
	 * @param ctx the parse tree
	 */
	void enterRepeatStatement(MySqlParser.RepeatStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#repeatStatement}.
	 * @param ctx the parse tree
	 */
	void exitRepeatStatement(MySqlParser.RepeatStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#returnStatement}.
	 * @param ctx the parse tree
	 */
	void enterReturnStatement(MySqlParser.ReturnStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#returnStatement}.
	 * @param ctx the parse tree
	 */
	void exitReturnStatement(MySqlParser.ReturnStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#whileStatement}.
	 * @param ctx the parse tree
	 */
	void enterWhileStatement(MySqlParser.WhileStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#whileStatement}.
	 * @param ctx the parse tree
	 */
	void exitWhileStatement(MySqlParser.WhileStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#cursorStatement}.
	 * @param ctx the parse tree
	 */
	void enterCursorStatement(MySqlParser.CursorStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#cursorStatement}.
	 * @param ctx the parse tree
	 */
	void exitCursorStatement(MySqlParser.CursorStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#declareVariable}.
	 * @param ctx the parse tree
	 */
	void enterDeclareVariable(MySqlParser.DeclareVariableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#declareVariable}.
	 * @param ctx the parse tree
	 */
	void exitDeclareVariable(MySqlParser.DeclareVariableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#declareCondition}.
	 * @param ctx the parse tree
	 */
	void enterDeclareCondition(MySqlParser.DeclareConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#declareCondition}.
	 * @param ctx the parse tree
	 */
	void exitDeclareCondition(MySqlParser.DeclareConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#declareCursor}.
	 * @param ctx the parse tree
	 */
	void enterDeclareCursor(MySqlParser.DeclareCursorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#declareCursor}.
	 * @param ctx the parse tree
	 */
	void exitDeclareCursor(MySqlParser.DeclareCursorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#declareHandler}.
	 * @param ctx the parse tree
	 */
	void enterDeclareHandler(MySqlParser.DeclareHandlerContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#declareHandler}.
	 * @param ctx the parse tree
	 */
	void exitDeclareHandler(MySqlParser.DeclareHandlerContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#handlerConditionValue}.
	 * @param ctx the parse tree
	 */
	void enterHandlerConditionValue(MySqlParser.HandlerConditionValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#handlerConditionValue}.
	 * @param ctx the parse tree
	 */
	void exitHandlerConditionValue(MySqlParser.HandlerConditionValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#procedureSqlStatement}.
	 * @param ctx the parse tree
	 */
	void enterProcedureSqlStatement(MySqlParser.ProcedureSqlStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#procedureSqlStatement}.
	 * @param ctx the parse tree
	 */
	void exitProcedureSqlStatement(MySqlParser.ProcedureSqlStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#caseAlternative}.
	 * @param ctx the parse tree
	 */
	void enterCaseAlternative(MySqlParser.CaseAlternativeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#caseAlternative}.
	 * @param ctx the parse tree
	 */
	void exitCaseAlternative(MySqlParser.CaseAlternativeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#elifAlternative}.
	 * @param ctx the parse tree
	 */
	void enterElifAlternative(MySqlParser.ElifAlternativeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#elifAlternative}.
	 * @param ctx the parse tree
	 */
	void exitElifAlternative(MySqlParser.ElifAlternativeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#alterUser}.
	 * @param ctx the parse tree
	 */
	void enterAlterUser(MySqlParser.AlterUserContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#alterUser}.
	 * @param ctx the parse tree
	 */
	void exitAlterUser(MySqlParser.AlterUserContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createUser}.
	 * @param ctx the parse tree
	 */
	void enterCreateUser(MySqlParser.CreateUserContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createUser}.
	 * @param ctx the parse tree
	 */
	void exitCreateUser(MySqlParser.CreateUserContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dropUser}.
	 * @param ctx the parse tree
	 */
	void enterDropUser(MySqlParser.DropUserContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dropUser}.
	 * @param ctx the parse tree
	 */
	void exitDropUser(MySqlParser.DropUserContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#grantStatement}.
	 * @param ctx the parse tree
	 */
	void enterGrantStatement(MySqlParser.GrantStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#grantStatement}.
	 * @param ctx the parse tree
	 */
	void exitGrantStatement(MySqlParser.GrantStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#grantProxy}.
	 * @param ctx the parse tree
	 */
	void enterGrantProxy(MySqlParser.GrantProxyContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#grantProxy}.
	 * @param ctx the parse tree
	 */
	void exitGrantProxy(MySqlParser.GrantProxyContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#renameUser}.
	 * @param ctx the parse tree
	 */
	void enterRenameUser(MySqlParser.RenameUserContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#renameUser}.
	 * @param ctx the parse tree
	 */
	void exitRenameUser(MySqlParser.RenameUserContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#revokeStatement}.
	 * @param ctx the parse tree
	 */
	void enterRevokeStatement(MySqlParser.RevokeStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#revokeStatement}.
	 * @param ctx the parse tree
	 */
	void exitRevokeStatement(MySqlParser.RevokeStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#revokeProxy}.
	 * @param ctx the parse tree
	 */
	void enterRevokeProxy(MySqlParser.RevokeProxyContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#revokeProxy}.
	 * @param ctx the parse tree
	 */
	void exitRevokeProxy(MySqlParser.RevokeProxyContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#setPasswordStatement}.
	 * @param ctx the parse tree
	 */
	void enterSetPasswordStatement(MySqlParser.SetPasswordStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#setPasswordStatement}.
	 * @param ctx the parse tree
	 */
	void exitSetPasswordStatement(MySqlParser.SetPasswordStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#userSpecification}.
	 * @param ctx the parse tree
	 */
	void enterUserSpecification(MySqlParser.UserSpecificationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#userSpecification}.
	 * @param ctx the parse tree
	 */
	void exitUserSpecification(MySqlParser.UserSpecificationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#userAuthOption}.
	 * @param ctx the parse tree
	 */
	void enterUserAuthOption(MySqlParser.UserAuthOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#userAuthOption}.
	 * @param ctx the parse tree
	 */
	void exitUserAuthOption(MySqlParser.UserAuthOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tlsOption}.
	 * @param ctx the parse tree
	 */
	void enterTlsOption(MySqlParser.TlsOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tlsOption}.
	 * @param ctx the parse tree
	 */
	void exitTlsOption(MySqlParser.TlsOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#userResourceOption}.
	 * @param ctx the parse tree
	 */
	void enterUserResourceOption(MySqlParser.UserResourceOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#userResourceOption}.
	 * @param ctx the parse tree
	 */
	void exitUserResourceOption(MySqlParser.UserResourceOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#userPasswordOption}.
	 * @param ctx the parse tree
	 */
	void enterUserPasswordOption(MySqlParser.UserPasswordOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#userPasswordOption}.
	 * @param ctx the parse tree
	 */
	void exitUserPasswordOption(MySqlParser.UserPasswordOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#userLockOption}.
	 * @param ctx the parse tree
	 */
	void enterUserLockOption(MySqlParser.UserLockOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#userLockOption}.
	 * @param ctx the parse tree
	 */
	void exitUserLockOption(MySqlParser.UserLockOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#privelegeClause}.
	 * @param ctx the parse tree
	 */
	void enterPrivelegeClause(MySqlParser.PrivelegeClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#privelegeClause}.
	 * @param ctx the parse tree
	 */
	void exitPrivelegeClause(MySqlParser.PrivelegeClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#privilege}.
	 * @param ctx the parse tree
	 */
	void enterPrivilege(MySqlParser.PrivilegeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#privilege}.
	 * @param ctx the parse tree
	 */
	void exitPrivilege(MySqlParser.PrivilegeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#privilegeLevel}.
	 * @param ctx the parse tree
	 */
	void enterPrivilegeLevel(MySqlParser.PrivilegeLevelContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#privilegeLevel}.
	 * @param ctx the parse tree
	 */
	void exitPrivilegeLevel(MySqlParser.PrivilegeLevelContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#renameUserClause}.
	 * @param ctx the parse tree
	 */
	void enterRenameUserClause(MySqlParser.RenameUserClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#renameUserClause}.
	 * @param ctx the parse tree
	 */
	void exitRenameUserClause(MySqlParser.RenameUserClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#analyzeTable}.
	 * @param ctx the parse tree
	 */
	void enterAnalyzeTable(MySqlParser.AnalyzeTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#analyzeTable}.
	 * @param ctx the parse tree
	 */
	void exitAnalyzeTable(MySqlParser.AnalyzeTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#checkTable}.
	 * @param ctx the parse tree
	 */
	void enterCheckTable(MySqlParser.CheckTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#checkTable}.
	 * @param ctx the parse tree
	 */
	void exitCheckTable(MySqlParser.CheckTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#checksumTable}.
	 * @param ctx the parse tree
	 */
	void enterChecksumTable(MySqlParser.ChecksumTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#checksumTable}.
	 * @param ctx the parse tree
	 */
	void exitChecksumTable(MySqlParser.ChecksumTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#optimizeTable}.
	 * @param ctx the parse tree
	 */
	void enterOptimizeTable(MySqlParser.OptimizeTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#optimizeTable}.
	 * @param ctx the parse tree
	 */
	void exitOptimizeTable(MySqlParser.OptimizeTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#repairTable}.
	 * @param ctx the parse tree
	 */
	void enterRepairTable(MySqlParser.RepairTableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#repairTable}.
	 * @param ctx the parse tree
	 */
	void exitRepairTable(MySqlParser.RepairTableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#checkTableOption}.
	 * @param ctx the parse tree
	 */
	void enterCheckTableOption(MySqlParser.CheckTableOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#checkTableOption}.
	 * @param ctx the parse tree
	 */
	void exitCheckTableOption(MySqlParser.CheckTableOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#createUdfunction}.
	 * @param ctx the parse tree
	 */
	void enterCreateUdfunction(MySqlParser.CreateUdfunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#createUdfunction}.
	 * @param ctx the parse tree
	 */
	void exitCreateUdfunction(MySqlParser.CreateUdfunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#installPlugin}.
	 * @param ctx the parse tree
	 */
	void enterInstallPlugin(MySqlParser.InstallPluginContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#installPlugin}.
	 * @param ctx the parse tree
	 */
	void exitInstallPlugin(MySqlParser.InstallPluginContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#uninstallPlugin}.
	 * @param ctx the parse tree
	 */
	void enterUninstallPlugin(MySqlParser.UninstallPluginContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#uninstallPlugin}.
	 * @param ctx the parse tree
	 */
	void exitUninstallPlugin(MySqlParser.UninstallPluginContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#setStatement}.
	 * @param ctx the parse tree
	 */
	void enterSetStatement(MySqlParser.SetStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#setStatement}.
	 * @param ctx the parse tree
	 */
	void exitSetStatement(MySqlParser.SetStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#showStatement}.
	 * @param ctx the parse tree
	 */
	void enterShowStatement(MySqlParser.ShowStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#showStatement}.
	 * @param ctx the parse tree
	 */
	void exitShowStatement(MySqlParser.ShowStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#variableClause}.
	 * @param ctx the parse tree
	 */
	void enterVariableClause(MySqlParser.VariableClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#variableClause}.
	 * @param ctx the parse tree
	 */
	void exitVariableClause(MySqlParser.VariableClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#showCommonEntity}.
	 * @param ctx the parse tree
	 */
	void enterShowCommonEntity(MySqlParser.ShowCommonEntityContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#showCommonEntity}.
	 * @param ctx the parse tree
	 */
	void exitShowCommonEntity(MySqlParser.ShowCommonEntityContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#showFilter}.
	 * @param ctx the parse tree
	 */
	void enterShowFilter(MySqlParser.ShowFilterContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#showFilter}.
	 * @param ctx the parse tree
	 */
	void exitShowFilter(MySqlParser.ShowFilterContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#showGlobalInfoClause}.
	 * @param ctx the parse tree
	 */
	void enterShowGlobalInfoClause(MySqlParser.ShowGlobalInfoClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#showGlobalInfoClause}.
	 * @param ctx the parse tree
	 */
	void exitShowGlobalInfoClause(MySqlParser.ShowGlobalInfoClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#showSchemaEntity}.
	 * @param ctx the parse tree
	 */
	void enterShowSchemaEntity(MySqlParser.ShowSchemaEntityContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#showSchemaEntity}.
	 * @param ctx the parse tree
	 */
	void exitShowSchemaEntity(MySqlParser.ShowSchemaEntityContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#showProfileType}.
	 * @param ctx the parse tree
	 */
	void enterShowProfileType(MySqlParser.ShowProfileTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#showProfileType}.
	 * @param ctx the parse tree
	 */
	void exitShowProfileType(MySqlParser.ShowProfileTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#binlogStatement}.
	 * @param ctx the parse tree
	 */
	void enterBinlogStatement(MySqlParser.BinlogStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#binlogStatement}.
	 * @param ctx the parse tree
	 */
	void exitBinlogStatement(MySqlParser.BinlogStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#cacheIndexStatement}.
	 * @param ctx the parse tree
	 */
	void enterCacheIndexStatement(MySqlParser.CacheIndexStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#cacheIndexStatement}.
	 * @param ctx the parse tree
	 */
	void exitCacheIndexStatement(MySqlParser.CacheIndexStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#flushStatement}.
	 * @param ctx the parse tree
	 */
	void enterFlushStatement(MySqlParser.FlushStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#flushStatement}.
	 * @param ctx the parse tree
	 */
	void exitFlushStatement(MySqlParser.FlushStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#killStatement}.
	 * @param ctx the parse tree
	 */
	void enterKillStatement(MySqlParser.KillStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#killStatement}.
	 * @param ctx the parse tree
	 */
	void exitKillStatement(MySqlParser.KillStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#loadIndexIntoCache}.
	 * @param ctx the parse tree
	 */
	void enterLoadIndexIntoCache(MySqlParser.LoadIndexIntoCacheContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#loadIndexIntoCache}.
	 * @param ctx the parse tree
	 */
	void exitLoadIndexIntoCache(MySqlParser.LoadIndexIntoCacheContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#resetStatement}.
	 * @param ctx the parse tree
	 */
	void enterResetStatement(MySqlParser.ResetStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#resetStatement}.
	 * @param ctx the parse tree
	 */
	void exitResetStatement(MySqlParser.ResetStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#shutdownStatement}.
	 * @param ctx the parse tree
	 */
	void enterShutdownStatement(MySqlParser.ShutdownStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#shutdownStatement}.
	 * @param ctx the parse tree
	 */
	void exitShutdownStatement(MySqlParser.ShutdownStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tableIndexes}.
	 * @param ctx the parse tree
	 */
	void enterTableIndexes(MySqlParser.TableIndexesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tableIndexes}.
	 * @param ctx the parse tree
	 */
	void exitTableIndexes(MySqlParser.TableIndexesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#flushOption}.
	 * @param ctx the parse tree
	 */
	void enterFlushOption(MySqlParser.FlushOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#flushOption}.
	 * @param ctx the parse tree
	 */
	void exitFlushOption(MySqlParser.FlushOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#flushTableOption}.
	 * @param ctx the parse tree
	 */
	void enterFlushTableOption(MySqlParser.FlushTableOptionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#flushTableOption}.
	 * @param ctx the parse tree
	 */
	void exitFlushTableOption(MySqlParser.FlushTableOptionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#loadedTableIndexes}.
	 * @param ctx the parse tree
	 */
	void enterLoadedTableIndexes(MySqlParser.LoadedTableIndexesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#loadedTableIndexes}.
	 * @param ctx the parse tree
	 */
	void exitLoadedTableIndexes(MySqlParser.LoadedTableIndexesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#simpleDescribeStatement}.
	 * @param ctx the parse tree
	 */
	void enterSimpleDescribeStatement(MySqlParser.SimpleDescribeStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#simpleDescribeStatement}.
	 * @param ctx the parse tree
	 */
	void exitSimpleDescribeStatement(MySqlParser.SimpleDescribeStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#fullDescribeStatement}.
	 * @param ctx the parse tree
	 */
	void enterFullDescribeStatement(MySqlParser.FullDescribeStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#fullDescribeStatement}.
	 * @param ctx the parse tree
	 */
	void exitFullDescribeStatement(MySqlParser.FullDescribeStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#helpStatement}.
	 * @param ctx the parse tree
	 */
	void enterHelpStatement(MySqlParser.HelpStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#helpStatement}.
	 * @param ctx the parse tree
	 */
	void exitHelpStatement(MySqlParser.HelpStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#useStatement}.
	 * @param ctx the parse tree
	 */
	void enterUseStatement(MySqlParser.UseStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#useStatement}.
	 * @param ctx the parse tree
	 */
	void exitUseStatement(MySqlParser.UseStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#signalStatement}.
	 * @param ctx the parse tree
	 */
	void enterSignalStatement(MySqlParser.SignalStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#signalStatement}.
	 * @param ctx the parse tree
	 */
	void exitSignalStatement(MySqlParser.SignalStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#resignalStatement}.
	 * @param ctx the parse tree
	 */
	void enterResignalStatement(MySqlParser.ResignalStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#resignalStatement}.
	 * @param ctx the parse tree
	 */
	void exitResignalStatement(MySqlParser.ResignalStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#signalConditionInformation}.
	 * @param ctx the parse tree
	 */
	void enterSignalConditionInformation(MySqlParser.SignalConditionInformationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#signalConditionInformation}.
	 * @param ctx the parse tree
	 */
	void exitSignalConditionInformation(MySqlParser.SignalConditionInformationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#diagnosticsStatement}.
	 * @param ctx the parse tree
	 */
	void enterDiagnosticsStatement(MySqlParser.DiagnosticsStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#diagnosticsStatement}.
	 * @param ctx the parse tree
	 */
	void exitDiagnosticsStatement(MySqlParser.DiagnosticsStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#diagnosticsConditionInformationName}.
	 * @param ctx the parse tree
	 */
	void enterDiagnosticsConditionInformationName(MySqlParser.DiagnosticsConditionInformationNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#diagnosticsConditionInformationName}.
	 * @param ctx the parse tree
	 */
	void exitDiagnosticsConditionInformationName(MySqlParser.DiagnosticsConditionInformationNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#describeObjectClause}.
	 * @param ctx the parse tree
	 */
	void enterDescribeObjectClause(MySqlParser.DescribeObjectClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#describeObjectClause}.
	 * @param ctx the parse tree
	 */
	void exitDescribeObjectClause(MySqlParser.DescribeObjectClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#fullId}.
	 * @param ctx the parse tree
	 */
	void enterFullId(MySqlParser.FullIdContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#fullId}.
	 * @param ctx the parse tree
	 */
	void exitFullId(MySqlParser.FullIdContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tableName}.
	 * @param ctx the parse tree
	 */
	void enterTableName(MySqlParser.TableNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tableName}.
	 * @param ctx the parse tree
	 */
	void exitTableName(MySqlParser.TableNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#fullColumnName}.
	 * @param ctx the parse tree
	 */
	void enterFullColumnName(MySqlParser.FullColumnNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#fullColumnName}.
	 * @param ctx the parse tree
	 */
	void exitFullColumnName(MySqlParser.FullColumnNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#indexColumnName}.
	 * @param ctx the parse tree
	 */
	void enterIndexColumnName(MySqlParser.IndexColumnNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#indexColumnName}.
	 * @param ctx the parse tree
	 */
	void exitIndexColumnName(MySqlParser.IndexColumnNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#userName}.
	 * @param ctx the parse tree
	 */
	void enterUserName(MySqlParser.UserNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#userName}.
	 * @param ctx the parse tree
	 */
	void exitUserName(MySqlParser.UserNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#mysqlVariable}.
	 * @param ctx the parse tree
	 */
	void enterMysqlVariable(MySqlParser.MysqlVariableContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#mysqlVariable}.
	 * @param ctx the parse tree
	 */
	void exitMysqlVariable(MySqlParser.MysqlVariableContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#charsetName}.
	 * @param ctx the parse tree
	 */
	void enterCharsetName(MySqlParser.CharsetNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#charsetName}.
	 * @param ctx the parse tree
	 */
	void exitCharsetName(MySqlParser.CharsetNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#collationName}.
	 * @param ctx the parse tree
	 */
	void enterCollationName(MySqlParser.CollationNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#collationName}.
	 * @param ctx the parse tree
	 */
	void exitCollationName(MySqlParser.CollationNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#engineName}.
	 * @param ctx the parse tree
	 */
	void enterEngineName(MySqlParser.EngineNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#engineName}.
	 * @param ctx the parse tree
	 */
	void exitEngineName(MySqlParser.EngineNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#uuidSet}.
	 * @param ctx the parse tree
	 */
	void enterUuidSet(MySqlParser.UuidSetContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#uuidSet}.
	 * @param ctx the parse tree
	 */
	void exitUuidSet(MySqlParser.UuidSetContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#xid}.
	 * @param ctx the parse tree
	 */
	void enterXid(MySqlParser.XidContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#xid}.
	 * @param ctx the parse tree
	 */
	void exitXid(MySqlParser.XidContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#xuidStringId}.
	 * @param ctx the parse tree
	 */
	void enterXuidStringId(MySqlParser.XuidStringIdContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#xuidStringId}.
	 * @param ctx the parse tree
	 */
	void exitXuidStringId(MySqlParser.XuidStringIdContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#authPlugin}.
	 * @param ctx the parse tree
	 */
	void enterAuthPlugin(MySqlParser.AuthPluginContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#authPlugin}.
	 * @param ctx the parse tree
	 */
	void exitAuthPlugin(MySqlParser.AuthPluginContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#uid}.
	 * @param ctx the parse tree
	 */
	void enterUid(MySqlParser.UidContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#uid}.
	 * @param ctx the parse tree
	 */
	void exitUid(MySqlParser.UidContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#simpleId}.
	 * @param ctx the parse tree
	 */
	void enterSimpleId(MySqlParser.SimpleIdContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#simpleId}.
	 * @param ctx the parse tree
	 */
	void exitSimpleId(MySqlParser.SimpleIdContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dottedId}.
	 * @param ctx the parse tree
	 */
	void enterDottedId(MySqlParser.DottedIdContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dottedId}.
	 * @param ctx the parse tree
	 */
	void exitDottedId(MySqlParser.DottedIdContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#decimalLiteral}.
	 * @param ctx the parse tree
	 */
	void enterDecimalLiteral(MySqlParser.DecimalLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#decimalLiteral}.
	 * @param ctx the parse tree
	 */
	void exitDecimalLiteral(MySqlParser.DecimalLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#fileSizeLiteral}.
	 * @param ctx the parse tree
	 */
	void enterFileSizeLiteral(MySqlParser.FileSizeLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#fileSizeLiteral}.
	 * @param ctx the parse tree
	 */
	void exitFileSizeLiteral(MySqlParser.FileSizeLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#stringLiteral}.
	 * @param ctx the parse tree
	 */
	void enterStringLiteral(MySqlParser.StringLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#stringLiteral}.
	 * @param ctx the parse tree
	 */
	void exitStringLiteral(MySqlParser.StringLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#booleanLiteral}.
	 * @param ctx the parse tree
	 */
	void enterBooleanLiteral(MySqlParser.BooleanLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#booleanLiteral}.
	 * @param ctx the parse tree
	 */
	void exitBooleanLiteral(MySqlParser.BooleanLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#hexadecimalLiteral}.
	 * @param ctx the parse tree
	 */
	void enterHexadecimalLiteral(MySqlParser.HexadecimalLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#hexadecimalLiteral}.
	 * @param ctx the parse tree
	 */
	void exitHexadecimalLiteral(MySqlParser.HexadecimalLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#nullNotnull}.
	 * @param ctx the parse tree
	 */
	void enterNullNotnull(MySqlParser.NullNotnullContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#nullNotnull}.
	 * @param ctx the parse tree
	 */
	void exitNullNotnull(MySqlParser.NullNotnullContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#constant}.
	 * @param ctx the parse tree
	 */
	void enterConstant(MySqlParser.ConstantContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#constant}.
	 * @param ctx the parse tree
	 */
	void exitConstant(MySqlParser.ConstantContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dataType}.
	 * @param ctx the parse tree
	 */
	void enterDataType(MySqlParser.DataTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dataType}.
	 * @param ctx the parse tree
	 */
	void exitDataType(MySqlParser.DataTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#collectionOptions}.
	 * @param ctx the parse tree
	 */
	void enterCollectionOptions(MySqlParser.CollectionOptionsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#collectionOptions}.
	 * @param ctx the parse tree
	 */
	void exitCollectionOptions(MySqlParser.CollectionOptionsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#convertedDataType}.
	 * @param ctx the parse tree
	 */
	void enterConvertedDataType(MySqlParser.ConvertedDataTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#convertedDataType}.
	 * @param ctx the parse tree
	 */
	void exitConvertedDataType(MySqlParser.ConvertedDataTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#lengthOneDimension}.
	 * @param ctx the parse tree
	 */
	void enterLengthOneDimension(MySqlParser.LengthOneDimensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#lengthOneDimension}.
	 * @param ctx the parse tree
	 */
	void exitLengthOneDimension(MySqlParser.LengthOneDimensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#lengthTwoDimension}.
	 * @param ctx the parse tree
	 */
	void enterLengthTwoDimension(MySqlParser.LengthTwoDimensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#lengthTwoDimension}.
	 * @param ctx the parse tree
	 */
	void exitLengthTwoDimension(MySqlParser.LengthTwoDimensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#lengthTwoOptionalDimension}.
	 * @param ctx the parse tree
	 */
	void enterLengthTwoOptionalDimension(MySqlParser.LengthTwoOptionalDimensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#lengthTwoOptionalDimension}.
	 * @param ctx the parse tree
	 */
	void exitLengthTwoOptionalDimension(MySqlParser.LengthTwoOptionalDimensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#uidList}.
	 * @param ctx the parse tree
	 */
	void enterUidList(MySqlParser.UidListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#uidList}.
	 * @param ctx the parse tree
	 */
	void exitUidList(MySqlParser.UidListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#tables}.
	 * @param ctx the parse tree
	 */
	void enterTables(MySqlParser.TablesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#tables}.
	 * @param ctx the parse tree
	 */
	void exitTables(MySqlParser.TablesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#indexColumnNames}.
	 * @param ctx the parse tree
	 */
	void enterIndexColumnNames(MySqlParser.IndexColumnNamesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#indexColumnNames}.
	 * @param ctx the parse tree
	 */
	void exitIndexColumnNames(MySqlParser.IndexColumnNamesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#expressions}.
	 * @param ctx the parse tree
	 */
	void enterExpressions(MySqlParser.ExpressionsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#expressions}.
	 * @param ctx the parse tree
	 */
	void exitExpressions(MySqlParser.ExpressionsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#expressionsWithDefaults}.
	 * @param ctx the parse tree
	 */
	void enterExpressionsWithDefaults(MySqlParser.ExpressionsWithDefaultsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#expressionsWithDefaults}.
	 * @param ctx the parse tree
	 */
	void exitExpressionsWithDefaults(MySqlParser.ExpressionsWithDefaultsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#constants}.
	 * @param ctx the parse tree
	 */
	void enterConstants(MySqlParser.ConstantsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#constants}.
	 * @param ctx the parse tree
	 */
	void exitConstants(MySqlParser.ConstantsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#simpleStrings}.
	 * @param ctx the parse tree
	 */
	void enterSimpleStrings(MySqlParser.SimpleStringsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#simpleStrings}.
	 * @param ctx the parse tree
	 */
	void exitSimpleStrings(MySqlParser.SimpleStringsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#userVariables}.
	 * @param ctx the parse tree
	 */
	void enterUserVariables(MySqlParser.UserVariablesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#userVariables}.
	 * @param ctx the parse tree
	 */
	void exitUserVariables(MySqlParser.UserVariablesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#defaultValue}.
	 * @param ctx the parse tree
	 */
	void enterDefaultValue(MySqlParser.DefaultValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#defaultValue}.
	 * @param ctx the parse tree
	 */
	void exitDefaultValue(MySqlParser.DefaultValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#currentTimestamp}.
	 * @param ctx the parse tree
	 */
	void enterCurrentTimestamp(MySqlParser.CurrentTimestampContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#currentTimestamp}.
	 * @param ctx the parse tree
	 */
	void exitCurrentTimestamp(MySqlParser.CurrentTimestampContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#expressionOrDefault}.
	 * @param ctx the parse tree
	 */
	void enterExpressionOrDefault(MySqlParser.ExpressionOrDefaultContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#expressionOrDefault}.
	 * @param ctx the parse tree
	 */
	void exitExpressionOrDefault(MySqlParser.ExpressionOrDefaultContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#ifExists}.
	 * @param ctx the parse tree
	 */
	void enterIfExists(MySqlParser.IfExistsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#ifExists}.
	 * @param ctx the parse tree
	 */
	void exitIfExists(MySqlParser.IfExistsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#ifNotExists}.
	 * @param ctx the parse tree
	 */
	void enterIfNotExists(MySqlParser.IfNotExistsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#ifNotExists}.
	 * @param ctx the parse tree
	 */
	void exitIfNotExists(MySqlParser.IfNotExistsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void enterFunctionCall(MySqlParser.FunctionCallContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void exitFunctionCall(MySqlParser.FunctionCallContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#specificFunction}.
	 * @param ctx the parse tree
	 */
	void enterSpecificFunction(MySqlParser.SpecificFunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#specificFunction}.
	 * @param ctx the parse tree
	 */
	void exitSpecificFunction(MySqlParser.SpecificFunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#caseFuncAlternative}.
	 * @param ctx the parse tree
	 */
	void enterCaseFuncAlternative(MySqlParser.CaseFuncAlternativeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#caseFuncAlternative}.
	 * @param ctx the parse tree
	 */
	void exitCaseFuncAlternative(MySqlParser.CaseFuncAlternativeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#levelsInWeightString}.
	 * @param ctx the parse tree
	 */
	void enterLevelsInWeightString(MySqlParser.LevelsInWeightStringContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#levelsInWeightString}.
	 * @param ctx the parse tree
	 */
	void exitLevelsInWeightString(MySqlParser.LevelsInWeightStringContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#levelInWeightListElement}.
	 * @param ctx the parse tree
	 */
	void enterLevelInWeightListElement(MySqlParser.LevelInWeightListElementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#levelInWeightListElement}.
	 * @param ctx the parse tree
	 */
	void exitLevelInWeightListElement(MySqlParser.LevelInWeightListElementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#aggregateWindowedFunction}.
	 * @param ctx the parse tree
	 */
	void enterAggregateWindowedFunction(MySqlParser.AggregateWindowedFunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#aggregateWindowedFunction}.
	 * @param ctx the parse tree
	 */
	void exitAggregateWindowedFunction(MySqlParser.AggregateWindowedFunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#scalarFunctionName}.
	 * @param ctx the parse tree
	 */
	void enterScalarFunctionName(MySqlParser.ScalarFunctionNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#scalarFunctionName}.
	 * @param ctx the parse tree
	 */
	void exitScalarFunctionName(MySqlParser.ScalarFunctionNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#passwordFunctionClause}.
	 * @param ctx the parse tree
	 */
	void enterPasswordFunctionClause(MySqlParser.PasswordFunctionClauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#passwordFunctionClause}.
	 * @param ctx the parse tree
	 */
	void exitPasswordFunctionClause(MySqlParser.PasswordFunctionClauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#functionArgs}.
	 * @param ctx the parse tree
	 */
	void enterFunctionArgs(MySqlParser.FunctionArgsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#functionArgs}.
	 * @param ctx the parse tree
	 */
	void exitFunctionArgs(MySqlParser.FunctionArgsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#functionArg}.
	 * @param ctx the parse tree
	 */
	void enterFunctionArg(MySqlParser.FunctionArgContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#functionArg}.
	 * @param ctx the parse tree
	 */
	void exitFunctionArg(MySqlParser.FunctionArgContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(MySqlParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(MySqlParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#predicate}.
	 * @param ctx the parse tree
	 */
	void enterPredicate(MySqlParser.PredicateContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#predicate}.
	 * @param ctx the parse tree
	 */
	void exitPredicate(MySqlParser.PredicateContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#expressionAtom}.
	 * @param ctx the parse tree
	 */
	void enterExpressionAtom(MySqlParser.ExpressionAtomContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#expressionAtom}.
	 * @param ctx the parse tree
	 */
	void exitExpressionAtom(MySqlParser.ExpressionAtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#unaryOperator}.
	 * @param ctx the parse tree
	 */
	void enterUnaryOperator(MySqlParser.UnaryOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#unaryOperator}.
	 * @param ctx the parse tree
	 */
	void exitUnaryOperator(MySqlParser.UnaryOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#comparisonOperator}.
	 * @param ctx the parse tree
	 */
	void enterComparisonOperator(MySqlParser.ComparisonOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#comparisonOperator}.
	 * @param ctx the parse tree
	 */
	void exitComparisonOperator(MySqlParser.ComparisonOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#logicalOperator}.
	 * @param ctx the parse tree
	 */
	void enterLogicalOperator(MySqlParser.LogicalOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#logicalOperator}.
	 * @param ctx the parse tree
	 */
	void exitLogicalOperator(MySqlParser.LogicalOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#bitOperator}.
	 * @param ctx the parse tree
	 */
	void enterBitOperator(MySqlParser.BitOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#bitOperator}.
	 * @param ctx the parse tree
	 */
	void exitBitOperator(MySqlParser.BitOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#mathOperator}.
	 * @param ctx the parse tree
	 */
	void enterMathOperator(MySqlParser.MathOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#mathOperator}.
	 * @param ctx the parse tree
	 */
	void exitMathOperator(MySqlParser.MathOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#jsonOperator}.
	 * @param ctx the parse tree
	 */
	void enterJsonOperator(MySqlParser.JsonOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#jsonOperator}.
	 * @param ctx the parse tree
	 */
	void exitJsonOperator(MySqlParser.JsonOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#charsetNameBase}.
	 * @param ctx the parse tree
	 */
	void enterCharsetNameBase(MySqlParser.CharsetNameBaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#charsetNameBase}.
	 * @param ctx the parse tree
	 */
	void exitCharsetNameBase(MySqlParser.CharsetNameBaseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#transactionLevelBase}.
	 * @param ctx the parse tree
	 */
	void enterTransactionLevelBase(MySqlParser.TransactionLevelBaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#transactionLevelBase}.
	 * @param ctx the parse tree
	 */
	void exitTransactionLevelBase(MySqlParser.TransactionLevelBaseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#privilegesBase}.
	 * @param ctx the parse tree
	 */
	void enterPrivilegesBase(MySqlParser.PrivilegesBaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#privilegesBase}.
	 * @param ctx the parse tree
	 */
	void exitPrivilegesBase(MySqlParser.PrivilegesBaseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#intervalTypeBase}.
	 * @param ctx the parse tree
	 */
	void enterIntervalTypeBase(MySqlParser.IntervalTypeBaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#intervalTypeBase}.
	 * @param ctx the parse tree
	 */
	void exitIntervalTypeBase(MySqlParser.IntervalTypeBaseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#dataTypeBase}.
	 * @param ctx the parse tree
	 */
	void enterDataTypeBase(MySqlParser.DataTypeBaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#dataTypeBase}.
	 * @param ctx the parse tree
	 */
	void exitDataTypeBase(MySqlParser.DataTypeBaseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#keywordsCanBeId}.
	 * @param ctx the parse tree
	 */
	void enterKeywordsCanBeId(MySqlParser.KeywordsCanBeIdContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#keywordsCanBeId}.
	 * @param ctx the parse tree
	 */
	void exitKeywordsCanBeId(MySqlParser.KeywordsCanBeIdContext ctx);
	/**
	 * Enter a parse tree produced by {@link MySqlParser#functionNameBase}.
	 * @param ctx the parse tree
	 */
	void enterFunctionNameBase(MySqlParser.FunctionNameBaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MySqlParser#functionNameBase}.
	 * @param ctx the parse tree
	 */
	void exitFunctionNameBase(MySqlParser.FunctionNameBaseContext ctx);
}