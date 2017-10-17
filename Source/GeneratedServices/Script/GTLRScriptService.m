// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Apps Script Execution API (script/v1)
// Description:
//   An API for managing and executing Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/execution/rest/v1/scripts/run

#import "GTLRScript.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeScriptAdminDirectoryGroup = @"https://www.googleapis.com/auth/admin.directory.group";
NSString * const kGTLRAuthScopeScriptAdminDirectoryUser  = @"https://www.googleapis.com/auth/admin.directory.user";
NSString * const kGTLRAuthScopeScriptCalendarFeeds       = @"https://www.google.com/calendar/feeds";
NSString * const kGTLRAuthScopeScriptDrive               = @"https://www.googleapis.com/auth/drive";
NSString * const kGTLRAuthScopeScriptForms               = @"https://www.googleapis.com/auth/forms";
NSString * const kGTLRAuthScopeScriptFormsCurrentonly    = @"https://www.googleapis.com/auth/forms.currentonly";
NSString * const kGTLRAuthScopeScriptGroups              = @"https://www.googleapis.com/auth/groups";
NSString * const kGTLRAuthScopeScriptM8Feeds             = @"https://www.google.com/m8/feeds";
NSString * const kGTLRAuthScopeScriptMailGoogleCom       = @"https://mail.google.com/";
NSString * const kGTLRAuthScopeScriptSpreadsheets        = @"https://www.googleapis.com/auth/spreadsheets";
NSString * const kGTLRAuthScopeScriptUserinfoEmail       = @"https://www.googleapis.com/auth/userinfo.email";

// ----------------------------------------------------------------------------
//   GTLRScriptService
//

@implementation GTLRScriptService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://script.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint", @"pp" ];
  }
  return self;
}

@end
