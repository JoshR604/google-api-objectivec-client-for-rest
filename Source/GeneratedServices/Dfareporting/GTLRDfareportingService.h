// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   DCM/DFA Reporting And Trafficking API (dfareporting/v2.8)
// Description:
//   Manages your DoubleClick Campaign Manager ad campaigns and reports.
// Documentation:
//   https://developers.google.com/doubleclick-advertisers/

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
 *  Authorization scope: View and manage DoubleClick for Advertisers reports
 *
 *  Value "https://www.googleapis.com/auth/dfareporting"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeDfareporting;
/**
 *  Authorization scope: Manage DoubleClick Digital Marketing conversions
 *
 *  Value "https://www.googleapis.com/auth/ddmconversions"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeDfareportingDdmconversions;
/**
 *  Authorization scope: View and manage your DoubleClick Campaign Manager's
 *  (DCM) display ad campaigns
 *
 *  Value "https://www.googleapis.com/auth/dfatrafficking"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeDfareportingDfatrafficking;

// ----------------------------------------------------------------------------
//   GTLRDfareportingService
//

/**
 *  Service for executing DCM/DFA Reporting And Trafficking API queries.
 *
 *  Manages your DoubleClick Campaign Manager ad campaigns and reports.
 */
@interface GTLRDfareportingService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRDfareportingQuery.h. The query can the be sent with GTLRService's execute
// methods,
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
