//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface HCBNInterceptRuleMatcher : NSObject
{
    NSArray *_includeRules;
    NSArray *_excludeRules;
}

@property(retain, nonatomic) NSArray *excludeRules; // @synthesize excludeRules=_excludeRules;
@property(retain, nonatomic) NSArray *includeRules; // @synthesize includeRules=_includeRules;
- (void).cxx_destruct;
- (_Bool)hitNetEvent:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToRuleMatcher:(id)arg1;

@end

