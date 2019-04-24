//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HCBURLNavigator : NSObject
{
}

+ (id)getRegistrationModelWithURL:(id)arg1;
+ (void)addAskCanJumpHandler:(CDUnknownBlockType)arg1 forURLArray:(id)arg2;
+ (id)openURL:(id)arg1 applyQuery:(id)arg2 navigationController:(id)arg3 configuration:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
+ (id)openURL:(id)arg1 applyQuery:(id)arg2 navigationController:(id)arg3 completed:(CDUnknownBlockType)arg4;
+ (id)openURL:(id)arg1 applyQuery:(id)arg2 completed:(CDUnknownBlockType)arg3;
+ (id)openURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (id)openURL:(id)arg1;
+ (_Bool)canOpenURL:(id)arg1;
+ (id)openURLPath:(id)arg1 applyQuery:(id)arg2 navigationController:(id)arg3 configuration:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
+ (id)openURLPath:(id)arg1 applyQuery:(id)arg2 navigationController:(id)arg3 configuration:(CDUnknownBlockType)arg4;
+ (id)openURLPath:(id)arg1 applyQuery:(id)arg2 navigationController:(id)arg3 completed:(CDUnknownBlockType)arg4;
+ (id)openURLPath:(id)arg1 applyQuery:(id)arg2 navigationController:(id)arg3;
+ (id)openURLPath:(id)arg1 applyQuery:(id)arg2 completed:(CDUnknownBlockType)arg3;
+ (id)openURLPath:(id)arg1 applyQuery:(id)arg2;
+ (id)openURLPath:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (id)openURLPath:(id)arg1;
+ (id)URLPathForKey:(id)arg1;
+ (void)setURLPath:(id)arg1 forKey:(id)arg2;
+ (void)registerURLPath:(id)arg1 forKey:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)registerURLPath:(id)arg1 forKey:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (void)registerURLPath:(id)arg1 forKey:(id)arg2 toViewController:(Class)arg3 isModal:(_Bool)arg4;
+ (void)registerURLPath:(id)arg1 forKey:(id)arg2 toViewController:(Class)arg3;
+ (id)interceptors;
+ (void)addInterceptors:(id)arg1;
+ (void)addInterceptor:(id)arg1;
+ (_Bool)enableInterceptor;
+ (void)setEnableInterceptor:(_Bool)arg1;
+ (id)schemeMap;
+ (id)schemes;
+ (void)addSchemes:(id)arg1;
+ (id)defaultNavigationController;
+ (id)navigationController;
+ (void)setupWithNavigationControllerProvider:(CDUnknownBlockType)arg1 schemes:(id)arg2;
+ (void)setupWithNavigationControllerProvider:(CDUnknownBlockType)arg1;

@end

