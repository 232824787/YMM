//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface YMMBrokerViewModel : NSObject
{
    UIViewController *_currentVC;
}

@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void).cxx_destruct;
- (void)requestSearchCompanyBroker:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 withFailure:(CDUnknownBlockType)arg3;
- (void)requestUpdateCompanyContact:(id)arg1 withContactInfo:(id)arg2 withSuccess:(CDUnknownBlockType)arg3 withFailure:(CDUnknownBlockType)arg4;
- (void)requestCompanyContact:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 withFailure:(CDUnknownBlockType)arg3;
- (void)requestBrokerCompany:(long long)arg1 withSuccess:(CDUnknownBlockType)arg2 withFailure:(CDUnknownBlockType)arg3;
- (id)initWithVC:(id)arg1;

@end

