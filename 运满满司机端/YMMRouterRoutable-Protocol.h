//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol YMMRouterRoutable <NSObject>
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly, copy, nonatomic) NSString *host;
@property(readonly, copy, nonatomic) NSString *scheme;
@property(readonly, copy, nonatomic) NSString *urlString;

@optional
@property(readonly, copy, nonatomic) NSString *fragment;
@property(readonly, nonatomic) NSDictionary *params;
@end

