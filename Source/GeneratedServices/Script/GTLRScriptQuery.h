// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Apps Script Execution API (script/v1)
// Description:
//   Executes functions in Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/execution/rest/v1/scripts/run

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRScript_ExecutionRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Script query classes.
 */
@interface GTLRScriptQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Runs a function in an Apps Script project. The project must be deployed
 *  for use with the Apps Script Execution API.
 *  This method requires authorization with an OAuth 2.0 token that includes at
 *  least one of the scopes listed in the [Authorization](#authorization)
 *  section; script projects that do not require authorization cannot be
 *  executed through this API. To find the correct scopes to include in the
 *  authentication token, open the project in the script editor, then select
 *  **File > Project properties** and click the **Scopes** tab.
 *
 *  Method: script.scripts.run
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeScriptAdminDirectoryGroup
 *    @c kGTLRAuthScopeScriptAdminDirectoryUser
 *    @c kGTLRAuthScopeScriptCalendarFeeds
 *    @c kGTLRAuthScopeScriptDrive
 *    @c kGTLRAuthScopeScriptForms
 *    @c kGTLRAuthScopeScriptFormsCurrentonly
 *    @c kGTLRAuthScopeScriptGroups
 *    @c kGTLRAuthScopeScriptM8Feeds
 *    @c kGTLRAuthScopeScriptMailGoogleCom
 *    @c kGTLRAuthScopeScriptSpreadsheets
 *    @c kGTLRAuthScopeScriptUserinfoEmail
 */
@interface GTLRScriptQuery_ScriptsRun : GTLRScriptQuery
// Previous library name was
//   +[GTLQueryScript queryForScriptsRunWithObject:scriptId:]

/**
 *  The script ID of the script to be executed. To find the script ID, open
 *  the project in the script editor and select **File > Project properties**.
 */
@property(nonatomic, copy, nullable) NSString *scriptId;

/**
 *  Fetches a @c GTLRScript_Operation.
 *
 *  Runs a function in an Apps Script project. The project must be deployed
 *  for use with the Apps Script Execution API.
 *  This method requires authorization with an OAuth 2.0 token that includes at
 *  least one of the scopes listed in the [Authorization](#authorization)
 *  section; script projects that do not require authorization cannot be
 *  executed through this API. To find the correct scopes to include in the
 *  authentication token, open the project in the script editor, then select
 *  **File > Project properties** and click the **Scopes** tab.
 *
 *  @param object The @c GTLRScript_ExecutionRequest to include in the query.
 *  @param scriptId The script ID of the script to be executed. To find the
 *    script ID, open
 *    the project in the script editor and select **File > Project properties**.
 *
 *  @returns GTLRScriptQuery_ScriptsRun
 */
+ (instancetype)queryWithObject:(GTLRScript_ExecutionRequest *)object
                       scriptId:(NSString *)scriptId;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
