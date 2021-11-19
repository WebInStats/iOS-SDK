#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.2.4 effective-4.2 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import UserNotifications;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="iOS_wis",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSObject;

SWIFT_AVAILABILITY(ios_app_extension,introduced=10.0) SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface UNNotificationAttachment (SWIFT_EXTENSION(iOS_wis))
+ (UNNotificationAttachment * _Nullable)saveImageToDiskWithFileIdentifier:(NSString * _Nonnull)fileIdentifier data:(NSData * _Nonnull)data options:(NSDictionary * _Nullable)options SWIFT_WARN_UNUSED_RESULT;
@end

@class UIViewController;
@class UIApplication;
@class UNNotificationRequest;
@class UNMutableNotificationContent;

SWIFT_CLASS("_TtC7iOS_wis10Webinstats")
@interface Webinstats : NSObject <UIApplicationDelegate>
- (nonnull instancetype)init:(NSString * _Nonnull)wis_cburl :(NSString * _Nonnull)wis_s :(NSString * _Nonnull)wis_sscookie OBJC_DESIGNATED_INITIALIZER;
- (void)trackAppInstallWithAdjustWithNetwork:(NSString * _Nonnull)network campaign:(NSString * _Nonnull)campaign;
- (void)trackAppInstallWithAdjustWithNetwork:(NSString * _Nonnull)network campaign:(NSString * _Nonnull)campaign idfa:(NSString * _Nonnull)idfa;
- (void)trackAppInstallWithAdjustWithTrackerToken:(NSString * _Nonnull)trackerToken trackerName:(NSString * _Nonnull)trackerName network:(NSString * _Nonnull)network campaign:(NSString * _Nonnull)campaign adgroup:(NSString * _Nonnull)adgroup creative:(NSString * _Nonnull)creative clickLabel:(NSString * _Nonnull)clickLabel adid:(NSString * _Nonnull)adid;
- (void)trackAppInstallStatsWithIdfa:(NSString * _Nonnull)idfa;
- (void)setAllowedFunctionWithAllowed_functions:(NSDictionary<NSString *, id> * _Nonnull)allowed_functions;
- (void)setAllowedDomainsWithAllowed_domains:(NSArray<NSString *> * _Nonnull)allowed_domains;
- (void)enableAppInbox;
- (void)disableAppInbox;
- (void)setAppGroupNameWithGroup_name:(NSString * _Nonnull)group_name;
- (void)setAppInboxHistorySizeWithLimit:(NSInteger)limit;
- (void)setDefaultTimeoutWithDefault_timeout:(NSInteger)default_timeout;
- (void)add_actionWithDi:(NSString * _Nonnull)di pt:(NSString * _Nonnull)pt v:(NSString * _Nonnull)v id:(NSString * _Nonnull)id to:(NSString * _Nonnull)to lv:(NSString * _Nonnull)lv client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)add_labelWithDi:(NSString * _Nonnull)di pt:(NSString * _Nonnull)pt v:(NSString * _Nonnull)v id:(NSString * _Nonnull)id to:(NSString * _Nonnull)to lv:(NSString * _Nonnull)lv client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)addItemWithProductId:(NSString * _Nonnull)productId quantity:(NSString * _Nonnull)quantity price:(NSString * _Nonnull)price category:(NSString * _Nonnull)category title:(NSString * _Nonnull)title;
- (void)addItemWithProductId:(NSString * _Nonnull)productId quantity:(NSString * _Nonnull)quantity price:(NSString * _Nonnull)price category:(NSString * _Nonnull)category title:(NSString * _Nonnull)title extraparams:(NSDictionary<NSString *, NSString *> * _Nonnull)extraparams;
- (void)executeWithView:(UIViewController * _Nonnull)view localmap:(NSDictionary<NSString *, NSString *> * _Nonnull)localmap;
- (NSString * _Nonnull)getuid SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getuid SWIFT_WARN_UNUSED_RESULT;
+ (void)_clinkWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
+ (void)saveClickCookieWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters view:(UIViewController * _Nonnull)view client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)saveClickEventWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)szbidWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters;
- (void)trackWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)onChangeState;
- (void)saveTestParametersWithUrl:(NSURL * _Nonnull)url;
- (void)pushClickCallbackWithCallback:(void (^ _Nonnull)(NSDictionary * _Nonnull))callback;
- (void)trackDeepLinkWithUrl:(NSURL * _Nonnull)url callback:(SWIFT_NOESCAPE void (^ _Nonnull)(NSURL * _Nonnull))callback;
- (void)trackDeepLinkWithUrl:(NSURL * _Nonnull)url;
- (void)setApiKeyWithApi_key:(NSString * _Nonnull)api_key;
- (void)register:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)didReceiveNotification:(UIApplication * _Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo;
+ (void)registerWithDeviceTokenWithDeviceToken:(NSData * _Nonnull)deviceToken;
- (void)getMessagesFromUserDefaults;
- (UNMutableNotificationContent * _Nonnull)didReceiveNotificationExtension:(UNNotificationRequest * _Nonnull)request :(UNMutableNotificationContent * _Nonnull)content SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
- (UNMutableNotificationContent * _Nonnull)didReceiveNotificationExtension:(UNNotificationRequest * _Nonnull)request :(UNMutableNotificationContent * _Nonnull)content :(NSString * _Nonnull)image SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
- (UNMutableNotificationContent * _Nonnull)didReceiveNotificationExtension:(UNNotificationRequest * _Nonnull)request :(UNMutableNotificationContent * _Nonnull)content :(NSString * _Nonnull)image :(NSString * _Nonnull)inbox_name SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
- (void)clearCustomActions;
- (void)createEventWithEventname:(NSString * _Nonnull)eventname view:(UIViewController * _Nonnull)view client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)setPayloadLinkWithLink:(NSString * _Nonnull)link;
- (void)setPayloadImageWithImage:(NSString * _Nonnull)image;
- (void)disable_push;
+ (void)enable_push;
+ (void)disable_hash;
+ (void)enable_hashWithHash:(NSString * _Nonnull)hash;
+ (BOOL)isEnabledHash SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getPushToken SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class WisInboxMessage;

SWIFT_CLASS("_TtC7iOS_wis8WisInbox")
@interface WisInbox : NSObject
- (void)setStoreNameWithStore_name:(NSString * _Nonnull)store_name;
- (NSInteger)getMessageCount SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getUnreadMessageCount SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getUnreadMessageCountByCategoryWithCategory:(NSString * _Nonnull)category SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSString *> * _Nonnull)getCategoryList SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getCategoryCount SWIFT_WARN_UNUSED_RESULT;
- (void)getCategoryListwithAPIWithCategory_callback:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull))category_callback;
- (NSDictionary<NSString *, NSNumber *> * _Nonnull)getCounts SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary<NSString *, NSNumber *> * _Nonnull)getCountsByCategoryWithCategory:(NSString * _Nonnull)category SWIFT_WARN_UNUSED_RESULT;
- (WisInboxMessage * _Nonnull)getMessageWithId:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
- (NSArray<WisInboxMessage *> * _Nonnull)getAllMessages SWIFT_WARN_UNUSED_RESULT;
- (NSArray<WisInboxMessage *> * _Nonnull)getMessagesByCategoryWithCategory:(NSString * _Nonnull)category SWIFT_WARN_UNUSED_RESULT;
- (void)markReadMessageWithId:(NSString * _Nonnull)id;
- (void)markReadMessageByIdlistWithIdList:(NSArray<NSString *> * _Nonnull)idList;
- (void)markReadMessagesByCategoryWithCategory:(NSString * _Nonnull)category;
- (void)markReadAllMessages;
- (BOOL)deleteMessageWithId:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
- (void)deleteMessagesByIdlistWithIdList:(NSArray<NSString *> * _Nonnull)idList;
- (void)deleteMessagesByCategoryWithCategory:(NSString * _Nonnull)category;
- (void)deleteAllMessages;
- (BOOL)pop SWIFT_WARN_UNUSED_RESULT;
- (void)checkMessages;
- (void)checkCallbackWithInbox_callback:(void (^ _Nonnull)(NSDictionary<NSString *, NSNumber *> * _Nonnull))inbox_callback;
- (BOOL)setMessageWithMessage:(NSDictionary<NSString *, id> * _Nonnull)message SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasMessageWithId:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
- (void)storeExpiredMessage;
- (NSArray<WisInboxMessage *> * _Nonnull)getAllExpiredMessages SWIFT_WARN_UNUSED_RESULT;
- (NSArray<WisInboxMessage *> * _Nonnull)getExpiredMessagesByCategoryWithCategory:(NSString * _Nonnull)category SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7iOS_wis15WisInboxMessage")
@interface WisInboxMessage : NSObject
@property (nonatomic, copy) NSString * _Nonnull id;
@property (nonatomic, copy) NSString * _Nonnull updateId;
@property (nonatomic, copy) NSString * _Nonnull timeout;
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic, copy) NSString * _Nonnull title;
@property (nonatomic, copy) NSString * _Nonnull message;
@property (nonatomic, copy) NSString * _Nonnull url;
@property (nonatomic, copy) NSString * _Nonnull imageUrl;
@property (nonatomic, copy) NSString * _Nonnull status;
@property (nonatomic, copy) NSString * _Nonnull date;
@property (nonatomic, copy) NSString * _Nonnull channel;
@property (nonatomic, copy) NSString * _Nonnull timeoutDate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class UNUserNotificationCenter;
@class UNNotification;
@class UNNotificationResponse;

SWIFT_CLASS("_TtC7iOS_wis23WisNotificationDelegate")
@interface WisNotificationDelegate : NSObject <UNUserNotificationCenterDelegate>
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center willPresentNotification:(UNNotification * _Nonnull)notification withCompletionHandler:(void (^ _Nonnull)(UNNotificationPresentationOptions))completionHandler SWIFT_AVAILABILITY(ios,introduced=10.0);
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center didReceiveNotificationResponse:(UNNotificationResponse * _Nonnull)response withCompletionHandler:(void (^ _Nonnull)(void))completionHandler SWIFT_AVAILABILITY(ios,introduced=10.0);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__i386__) && __i386__
// Generated by Apple Swift version 5.2.4 effective-4.2 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import UserNotifications;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="iOS_wis",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSObject;

SWIFT_AVAILABILITY(ios_app_extension,introduced=10.0) SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface UNNotificationAttachment (SWIFT_EXTENSION(iOS_wis))
+ (UNNotificationAttachment * _Nullable)saveImageToDiskWithFileIdentifier:(NSString * _Nonnull)fileIdentifier data:(NSData * _Nonnull)data options:(NSDictionary * _Nullable)options SWIFT_WARN_UNUSED_RESULT;
@end

@class UIViewController;
@class UIApplication;
@class UNNotificationRequest;
@class UNMutableNotificationContent;

SWIFT_CLASS("_TtC7iOS_wis10Webinstats")
@interface Webinstats : NSObject <UIApplicationDelegate>
- (nonnull instancetype)init:(NSString * _Nonnull)wis_cburl :(NSString * _Nonnull)wis_s :(NSString * _Nonnull)wis_sscookie OBJC_DESIGNATED_INITIALIZER;
- (void)trackAppInstallWithAdjustWithNetwork:(NSString * _Nonnull)network campaign:(NSString * _Nonnull)campaign;
- (void)trackAppInstallWithAdjustWithNetwork:(NSString * _Nonnull)network campaign:(NSString * _Nonnull)campaign idfa:(NSString * _Nonnull)idfa;
- (void)trackAppInstallWithAdjustWithTrackerToken:(NSString * _Nonnull)trackerToken trackerName:(NSString * _Nonnull)trackerName network:(NSString * _Nonnull)network campaign:(NSString * _Nonnull)campaign adgroup:(NSString * _Nonnull)adgroup creative:(NSString * _Nonnull)creative clickLabel:(NSString * _Nonnull)clickLabel adid:(NSString * _Nonnull)adid;
- (void)trackAppInstallStatsWithIdfa:(NSString * _Nonnull)idfa;
- (void)setAllowedFunctionWithAllowed_functions:(NSDictionary<NSString *, id> * _Nonnull)allowed_functions;
- (void)setAllowedDomainsWithAllowed_domains:(NSArray<NSString *> * _Nonnull)allowed_domains;
- (void)enableAppInbox;
- (void)disableAppInbox;
- (void)setAppGroupNameWithGroup_name:(NSString * _Nonnull)group_name;
- (void)setAppInboxHistorySizeWithLimit:(NSInteger)limit;
- (void)setDefaultTimeoutWithDefault_timeout:(NSInteger)default_timeout;
- (void)add_actionWithDi:(NSString * _Nonnull)di pt:(NSString * _Nonnull)pt v:(NSString * _Nonnull)v id:(NSString * _Nonnull)id to:(NSString * _Nonnull)to lv:(NSString * _Nonnull)lv client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)add_labelWithDi:(NSString * _Nonnull)di pt:(NSString * _Nonnull)pt v:(NSString * _Nonnull)v id:(NSString * _Nonnull)id to:(NSString * _Nonnull)to lv:(NSString * _Nonnull)lv client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)addItemWithProductId:(NSString * _Nonnull)productId quantity:(NSString * _Nonnull)quantity price:(NSString * _Nonnull)price category:(NSString * _Nonnull)category title:(NSString * _Nonnull)title;
- (void)addItemWithProductId:(NSString * _Nonnull)productId quantity:(NSString * _Nonnull)quantity price:(NSString * _Nonnull)price category:(NSString * _Nonnull)category title:(NSString * _Nonnull)title extraparams:(NSDictionary<NSString *, NSString *> * _Nonnull)extraparams;
- (void)executeWithView:(UIViewController * _Nonnull)view localmap:(NSDictionary<NSString *, NSString *> * _Nonnull)localmap;
- (NSString * _Nonnull)getuid SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getuid SWIFT_WARN_UNUSED_RESULT;
+ (void)_clinkWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
+ (void)saveClickCookieWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters view:(UIViewController * _Nonnull)view client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)saveClickEventWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)szbidWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters;
- (void)trackWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)onChangeState;
- (void)saveTestParametersWithUrl:(NSURL * _Nonnull)url;
- (void)pushClickCallbackWithCallback:(void (^ _Nonnull)(NSDictionary * _Nonnull))callback;
- (void)trackDeepLinkWithUrl:(NSURL * _Nonnull)url callback:(SWIFT_NOESCAPE void (^ _Nonnull)(NSURL * _Nonnull))callback;
- (void)trackDeepLinkWithUrl:(NSURL * _Nonnull)url;
- (void)setApiKeyWithApi_key:(NSString * _Nonnull)api_key;
- (void)register:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)didReceiveNotification:(UIApplication * _Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo;
+ (void)registerWithDeviceTokenWithDeviceToken:(NSData * _Nonnull)deviceToken;
- (void)getMessagesFromUserDefaults;
- (UNMutableNotificationContent * _Nonnull)didReceiveNotificationExtension:(UNNotificationRequest * _Nonnull)request :(UNMutableNotificationContent * _Nonnull)content SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
- (UNMutableNotificationContent * _Nonnull)didReceiveNotificationExtension:(UNNotificationRequest * _Nonnull)request :(UNMutableNotificationContent * _Nonnull)content :(NSString * _Nonnull)image SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
- (UNMutableNotificationContent * _Nonnull)didReceiveNotificationExtension:(UNNotificationRequest * _Nonnull)request :(UNMutableNotificationContent * _Nonnull)content :(NSString * _Nonnull)image :(NSString * _Nonnull)inbox_name SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
- (void)clearCustomActions;
- (void)createEventWithEventname:(NSString * _Nonnull)eventname view:(UIViewController * _Nonnull)view client_map:(NSDictionary<NSString *, NSString *> * _Nonnull)client_map;
- (void)setPayloadLinkWithLink:(NSString * _Nonnull)link;
- (void)setPayloadImageWithImage:(NSString * _Nonnull)image;
- (void)disable_push;
+ (void)enable_push;
+ (void)disable_hash;
+ (void)enable_hashWithHash:(NSString * _Nonnull)hash;
+ (BOOL)isEnabledHash SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getPushToken SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class WisInboxMessage;

SWIFT_CLASS("_TtC7iOS_wis8WisInbox")
@interface WisInbox : NSObject
- (void)setStoreNameWithStore_name:(NSString * _Nonnull)store_name;
- (NSInteger)getMessageCount SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getUnreadMessageCount SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getUnreadMessageCountByCategoryWithCategory:(NSString * _Nonnull)category SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSString *> * _Nonnull)getCategoryList SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getCategoryCount SWIFT_WARN_UNUSED_RESULT;
- (void)getCategoryListwithAPIWithCategory_callback:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull))category_callback;
- (NSDictionary<NSString *, NSNumber *> * _Nonnull)getCounts SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary<NSString *, NSNumber *> * _Nonnull)getCountsByCategoryWithCategory:(NSString * _Nonnull)category SWIFT_WARN_UNUSED_RESULT;
- (WisInboxMessage * _Nonnull)getMessageWithId:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
- (NSArray<WisInboxMessage *> * _Nonnull)getAllMessages SWIFT_WARN_UNUSED_RESULT;
- (NSArray<WisInboxMessage *> * _Nonnull)getMessagesByCategoryWithCategory:(NSString * _Nonnull)category SWIFT_WARN_UNUSED_RESULT;
- (void)markReadMessageWithId:(NSString * _Nonnull)id;
- (void)markReadMessageByIdlistWithIdList:(NSArray<NSString *> * _Nonnull)idList;
- (void)markReadMessagesByCategoryWithCategory:(NSString * _Nonnull)category;
- (void)markReadAllMessages;
- (BOOL)deleteMessageWithId:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
- (void)deleteMessagesByIdlistWithIdList:(NSArray<NSString *> * _Nonnull)idList;
- (void)deleteMessagesByCategoryWithCategory:(NSString * _Nonnull)category;
- (void)deleteAllMessages;
- (BOOL)pop SWIFT_WARN_UNUSED_RESULT;
- (void)checkMessages;
- (void)checkCallbackWithInbox_callback:(void (^ _Nonnull)(NSDictionary<NSString *, NSNumber *> * _Nonnull))inbox_callback;
- (BOOL)setMessageWithMessage:(NSDictionary<NSString *, id> * _Nonnull)message SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasMessageWithId:(NSString * _Nonnull)id SWIFT_WARN_UNUSED_RESULT;
- (void)storeExpiredMessage;
- (NSArray<WisInboxMessage *> * _Nonnull)getAllExpiredMessages SWIFT_WARN_UNUSED_RESULT;
- (NSArray<WisInboxMessage *> * _Nonnull)getExpiredMessagesByCategoryWithCategory:(NSString * _Nonnull)category SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7iOS_wis15WisInboxMessage")
@interface WisInboxMessage : NSObject
@property (nonatomic, copy) NSString * _Nonnull id;
@property (nonatomic, copy) NSString * _Nonnull updateId;
@property (nonatomic, copy) NSString * _Nonnull timeout;
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic, copy) NSString * _Nonnull title;
@property (nonatomic, copy) NSString * _Nonnull message;
@property (nonatomic, copy) NSString * _Nonnull url;
@property (nonatomic, copy) NSString * _Nonnull imageUrl;
@property (nonatomic, copy) NSString * _Nonnull status;
@property (nonatomic, copy) NSString * _Nonnull date;
@property (nonatomic, copy) NSString * _Nonnull channel;
@property (nonatomic, copy) NSString * _Nonnull timeoutDate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class UNUserNotificationCenter;
@class UNNotification;
@class UNNotificationResponse;

SWIFT_CLASS("_TtC7iOS_wis23WisNotificationDelegate")
@interface WisNotificationDelegate : NSObject <UNUserNotificationCenterDelegate>
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center willPresentNotification:(UNNotification * _Nonnull)notification withCompletionHandler:(void (^ _Nonnull)(UNNotificationPresentationOptions))completionHandler SWIFT_AVAILABILITY(ios,introduced=10.0);
- (void)userNotificationCenter:(UNUserNotificationCenter * _Nonnull)center didReceiveNotificationResponse:(UNNotificationResponse * _Nonnull)response withCompletionHandler:(void (^ _Nonnull)(void))completionHandler SWIFT_AVAILABILITY(ios,introduced=10.0);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
