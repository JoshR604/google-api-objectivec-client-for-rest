// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Dynamic Links API (firebasedynamiclinks/v1)
// Description:
//   Programmatically creates and manages Firebase Dynamic Links.
// Documentation:
//   https://firebase.google.com/docs/dynamic-links/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseDynamicLinks_CreateShortDynamicLinkRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Firebase Dynamic Links query classes.
 */
@interface GTLRFirebaseDynamicLinksQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a short Dynamic Link given either a valid long Dynamic Link or
 *  details such as Dynamic Link domain, Android and iOS app information.
 *  The created short Dynamic Link will not expire.
 *  Repeated calls with the same long Dynamic Link or Dynamic Link information
 *  will produce the same short Dynamic Link.
 *  The Dynamic Link domain in the request must be owned by requester's
 *  Firebase project.
 *
 *  Method: firebasedynamiclinks.shortLinks.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseDynamicLinksFirebase
 */
@interface GTLRFirebaseDynamicLinksQuery_ShortLinksCreate : GTLRFirebaseDynamicLinksQuery
// Previous library name was
//   +[GTLQueryFirebaseDynamicLinks queryForShortLinksCreateWithObject:]

/**
 *  Fetches a @c GTLRFirebaseDynamicLinks_CreateShortDynamicLinkResponse.
 *
 *  Creates a short Dynamic Link given either a valid long Dynamic Link or
 *  details such as Dynamic Link domain, Android and iOS app information.
 *  The created short Dynamic Link will not expire.
 *  Repeated calls with the same long Dynamic Link or Dynamic Link information
 *  will produce the same short Dynamic Link.
 *  The Dynamic Link domain in the request must be owned by requester's
 *  Firebase project.
 *
 *  @param object The @c GTLRFirebaseDynamicLinks_CreateShortDynamicLinkRequest
 *    to include in the query.
 *
 *  @returns GTLRFirebaseDynamicLinksQuery_ShortLinksCreate
 */
+ (instancetype)queryWithObject:(GTLRFirebaseDynamicLinks_CreateShortDynamicLinkRequest *)object;

@end

/**
 *  Fetches analytics stats of a short Dynamic Link for a given
 *  duration. Metrics include number of clicks, redirects, installs,
 *  app first opens, and app reopens.
 *
 *  Method: firebasedynamiclinks.getLinkStats
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseDynamicLinksFirebase
 */
@interface GTLRFirebaseDynamicLinksQuery_V1GetLinkStats : GTLRFirebaseDynamicLinksQuery
// Previous library name was
//   +[GTLQueryFirebaseDynamicLinks queryForGetLinkStatsWithdynamicLink:]

/** The span of time requested in days. */
@property(nonatomic, assign) long long durationDays;

/** Dynamic Link URL. e.g. https://abcd.app.goo.gl/wxyz */
@property(nonatomic, copy, nullable) NSString *dynamicLink;

/**
 *  Fetches a @c GTLRFirebaseDynamicLinks_DynamicLinkStats.
 *
 *  Fetches analytics stats of a short Dynamic Link for a given
 *  duration. Metrics include number of clicks, redirects, installs,
 *  app first opens, and app reopens.
 *
 *  @param dynamicLink Dynamic Link URL. e.g. https://abcd.app.goo.gl/wxyz
 *
 *  @returns GTLRFirebaseDynamicLinksQuery_V1GetLinkStats
 */
+ (instancetype)queryWithDynamicLink:(NSString *)dynamicLink;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
