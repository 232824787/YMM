//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface YMMForeignOrderListViewModel : NSObject
{
    UIViewController *_currentVC;
}

@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void).cxx_destruct;
- (void)requestForeignOrderScheme:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestForeignOrderList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)getShowsCount:(long long)arg1;
- (void)requestForeignOrderListTabNum:(CDUnknownBlockType)arg1;
- (id)initWithVC:(id)arg1;

@end

