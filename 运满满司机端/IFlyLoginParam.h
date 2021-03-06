//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFlyParam.h"

#import "IFlyParamMapProtocol.h"

@class NSArray, NSString;

@interface IFlyLoginParam : IFlyParam <IFlyParamMapProtocol>
{
    NSArray *_plusParams;
}

@property(retain, nonatomic) NSArray *plusParams; // @synthesize plusParams=_plusParams;
- (_Bool)isVaild:(id)arg1;
- (id)map:(id)arg1;
- (id)toString:(_Bool)arg1;
- (id)valueForKey:(id)arg1;
- (_Bool)setValue:(id)arg1 forKey:(id)arg2;
- (_Bool)setPlusParam:(id)arg1 withValue:(id)arg2;
- (_Bool)isPlusParams:(id)arg1;
- (void)initPlusParams;
- (void)setDefault;
- (void)mapDicInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

