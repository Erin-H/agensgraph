/*-------------------------------------------------------------------------
 *
 * parse_utilcmd.h
 *		parse analysis for utility commands
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/parser/parse_utilcmd.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef PARSE_UTILCMD_H
#define PARSE_UTILCMD_H

#include "parser/parse_node.h"

#define AG_GRAPH	"graph"
#define AG_VERTEX	"vertex"
#define AG_EDGE		"edge"
#define AG_VID		"vid"
#define AG_EIO		"inoid"
#define AG_EIC		"incoming"
#define AG_EOO		"outoid"
#define AG_EOG		"outgoing"

extern List *transformCreateStmt(CreateStmt *stmt, const char *queryString);
extern List *transformCreateLabelStmt(CreateStmt *stmt, const char *queryString);
extern List *transformAlterTableStmt(Oid relid, AlterTableStmt *stmt,
						const char *queryString);
extern IndexStmt *transformIndexStmt(Oid relid, IndexStmt *stmt,
				   const char *queryString);
extern void transformRuleStmt(RuleStmt *stmt, const char *queryString,
				  List **actions, Node **whereClause);
extern List *transformCreateSchemaStmt(CreateSchemaStmt *stmt);

#endif   /* PARSE_UTILCMD_H */
