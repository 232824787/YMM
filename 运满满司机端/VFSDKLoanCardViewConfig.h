//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, VFSDKLoanCardViewTitleBar;

@interface VFSDKLoanCardViewConfig : NSObject
{
    NSString *_uid;
    NSString *_userStatus;
    VFSDKLoanCardViewTitleBar *_titleBar;
    NSArray *_viewList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *viewList; // @synthesize viewList=_viewList;
@property(retain, nonatomic) VFSDKLoanCardViewTitleBar *titleBar; // @synthesize titleBar=_titleBar;
@property(copy, nonatomic) NSString *userStatus; // @synthesize userStatus=_userStatus;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

