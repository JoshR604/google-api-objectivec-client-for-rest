// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Runtime Configuration API (runtimeconfig/v1)
// Description:
//   The Runtime Configurator allows you to dynamically configure and expose
//   variables through Google Cloud Platform. In addition, you can also set
//   Watchers and Waiters that will watch for changes to your data and return
//   based on certain conditions.
// Documentation:
//   https://cloud.google.com/deployment-manager/runtime-configurator/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudRuntimeConfigCloudPlatform;
/**
 *  Authorization scope: Manage your Google Cloud Platform services' runtime
 *  configuration
 *
 *  Value "https://www.googleapis.com/auth/cloudruntimeconfig"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig;

// ----------------------------------------------------------------------------
//   GTLRCloudRuntimeConfigService
//

/**
 *  Service for executing Google Cloud Runtime Configuration API queries.
 *
 *  The Runtime Configurator allows you to dynamically configure and expose
 *  variables through Google Cloud Platform. In addition, you can also set
 *  Watchers and Waiters that will watch for changes to your data and return
 *  based on certain conditions.
 */
@interface GTLRCloudRuntimeConfigService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRCloudRuntimeConfigQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
