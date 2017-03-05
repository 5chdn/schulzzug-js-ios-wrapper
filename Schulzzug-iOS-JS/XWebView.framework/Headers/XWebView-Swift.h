// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import WebKit;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface NSHTTPURLResponse (SWIFT_EXTENSION(XWebView))
@end


@interface NSNumber (SWIFT_EXTENSION(XWebView))
@end


SWIFT_PROTOCOL("_TtP8XWebView18ObjCJSONStringable_")
@protocol ObjCJSONStringable
@property (nonatomic, readonly, copy) NSString * _Nullable jsonString;
@end

@class WKNavigation;

@interface WKWebView (SWIFT_EXTENSION(XWebView))
- (WKNavigation * _Nullable)loadFileURL:(NSURL * _Nonnull)url overlayURLs:(NSArray<NSURL *> * _Nullable)overlayURLs;
@end


@interface WKWebView (SWIFT_EXTENSION(XWebView))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id _Nonnull undefined;)
+ (id _Nonnull)undefined;
- (id _Nullable)syncEvaluateJavaScript:(NSString * _Nonnull)script error:(NSError * _Nullable * _Nullable)error;
@end

@class XWVScriptObject;

@interface WKWebView (SWIFT_EXTENSION(XWebView))
@property (nonatomic, readonly, strong) XWVScriptObject * _Nonnull windowObject;
- (XWVScriptObject * _Nullable)loadPlugin:(id _Nonnull)object namespace:(NSString * _Nonnull)namespace_;
@end

@class NSRunLoop;
@class OS_dispatch_queue;
@class NSThread;
@class WKUserContentController;
@class WKScriptMessage;

SWIFT_CLASS("_TtC8XWebView10XWVChannel")
@interface XWVChannel : NSObject <WKScriptMessageHandler>
@property (nonatomic, readonly, copy) NSString * _Nullable identifier;
@property (nonatomic, readonly, strong) NSRunLoop * _Nullable runLoop;
@property (nonatomic, readonly, strong) OS_dispatch_queue * _Nullable queue;
@property (nonatomic, readonly, weak) WKWebView * _Nullable webView;
- (nonnull instancetype)initWithWebView:(WKWebView * _Nonnull)webView;
- (nonnull instancetype)initWithWebView:(WKWebView * _Nonnull)webView thread:(NSThread * _Nonnull)thread;
- (nonnull instancetype)initWithWebView:(WKWebView * _Nonnull)webView queue:(OS_dispatch_queue * _Nonnull)queue OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithWebView:(WKWebView * _Nonnull)webView runLoop:(NSRunLoop * _Nonnull)runLoop OBJC_DESIGNATED_INITIALIZER;
- (XWVScriptObject * _Nullable)bindPlugin:(id _Nonnull)object toNamespace:(NSString * _Nonnull)namespace_;
- (void)unbind;
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8XWebView9XWVObject")
@interface XWVObject : NSObject
@property (nonatomic, readonly, copy, getter=namespace) NSString * _Nonnull namespace_;
@property (nonatomic, readonly, weak) WKWebView * _Nullable webView;
- (id _Nullable)evaluateExpression:(NSString * _Nonnull)expression error:(NSError * _Nullable * _Nullable)error;
- (void)evaluateExpression:(NSString * _Nonnull)expression completionHandler:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completionHandler;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface XWVObject (SWIFT_EXTENSION(XWebView))
@property (nonatomic, readonly, copy) NSString * _Nullable jsonString;
@end


SWIFT_CLASS("_TtC8XWebView15XWVScriptObject")
@interface XWVScriptObject : XWVObject
- (void)constructWithArguments:(NSArray * _Nullable)arguments completionHandler:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completionHandler;
- (void)callWithArguments:(NSArray * _Nullable)arguments completionHandler:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completionHandler;
- (void)callMethod:(NSString * _Nonnull)name with:(NSArray * _Nullable)arguments completionHandler:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completionHandler;
- (XWVScriptObject * _Nullable)constructWithArguments:(NSArray * _Nullable)arguments error:(NSError * _Nullable * _Nullable)error;
- (id _Nullable)callWithArguments:(NSArray * _Nullable)arguments error:(NSError * _Nullable * _Nullable)error;
- (id _Nullable)callMethod:(NSString * _Nonnull)name with:(NSArray * _Nullable)arguments error:(NSError * _Nullable * _Nullable)error;
- (id _Nullable)defineProperty:(NSString * _Nonnull)name descriptor:(NSDictionary<NSString *, id> * _Nonnull)descriptor error:(NSError * _Nullable * _Nullable)error;
- (BOOL)deleteProperty:(NSString * _Nonnull)name;
- (BOOL)hasProperty:(NSString * _Nonnull)name;
- (id _Nullable)valueFor:(NSString * _Nonnull)name error:(NSError * _Nullable * _Nullable)error;
- (void)setValue:(id _Nullable)value for:(NSString * _Nonnull)name;
- (id _Nullable)valueAt:(NSUInteger)index error:(NSError * _Nullable * _Nullable)error;
- (void)setValue:(id _Nullable)value at:(NSUInteger)index;
@end


@interface XWVScriptObject (SWIFT_EXTENSION(XWebView))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) XWVScriptObject * _Nullable bindingObject;)
+ (XWVScriptObject * _Nullable)bindingObject;
@end


@interface XWVScriptObject (SWIFT_EXTENSION(XWebView))
- (id _Nonnull)objectForKeyedSubscript:(NSString * _Nonnull)name;
- (void)setObject:(id _Nonnull)newValue forKeyedSubscript:(NSString * _Nonnull)name;
- (id _Nonnull)objectAtIndexedSubscript:(NSUInteger)index;
- (void)setObject:(id _Nonnull)newValue atIndexedSubscript:(NSUInteger)index;
@end


SWIFT_PROTOCOL("_TtP8XWebView12XWVScripting_")
@protocol XWVScripting
@optional
@property (nonatomic, readonly, copy) NSString * _Nonnull channelIdentifier;
- (NSString * _Nonnull)rewriteStub:(NSString * _Nonnull)stub forKey:(NSString * _Nonnull)forKey;
- (id _Null_unspecified)invokeDefaultMethodWithArguments:(NSArray * _Null_unspecified)args;
- (void)finalizeForScript;
+ (NSString * _Nullable)scriptNameForKey:(int8_t const * _Nonnull)key;
+ (NSString * _Nullable)scriptNameFor:(SEL _Nonnull)selector;
+ (BOOL)isSelectorExcludedFromScript:(SEL _Nonnull)selector;
+ (BOOL)isKeyExcludedFromScript:(int8_t const * _Nonnull)name;
@end

#pragma clang diagnostic pop
