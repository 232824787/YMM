//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface YMMBasisManager : NSObject
{
    NSArray *_basisModules;
}

+ (id)shared;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSArray *basisModules; // @synthesize basisModules=_basisModules;
- (void).cxx_destruct;
- (void)modulesDoLogoutActions;
- (void)modulesDoLoginActions;
- (void)ymm_initBasisModules:(id)arg1;
- (id)init;

@end

