//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface GTServiceJewelBoxModel : YMMCommonModel
{
    NSNumber *_appId;
    NSString *_iconURL;
    NSString *_name;
    NSString *_url;
    long long _visitor;
}

@property(nonatomic) long long visitor; // @synthesize visitor=_visitor;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end

