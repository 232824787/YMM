//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface YMMAdvertisementBus : NSObject
{
    NSMutableDictionary *_busDic;
}

@property(retain, nonatomic) NSMutableDictionary *busDic; // @synthesize busDic=_busDic;
- (void).cxx_destruct;
- (CDUnknownBlockType)actionForAdvertId:(id)arg1;
- (void)registerAction:(CDUnknownBlockType)arg1 AdvertId:(id)arg2;

@end

