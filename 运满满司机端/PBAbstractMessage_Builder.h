//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessage_Builder.h"

@class NSString;

@interface PBAbstractMessage_Builder : NSObject <PBMessage_Builder>
{
}

- (id)setUnknownFields:(id)arg1;
- (id)unknownFields;
- (id)defaultInstance;
- (_Bool)isInitialized;
- (id)buildPartial;
- (id)build;
- (id)mergeDelimitedFromInputStream:(id)arg1;
- (id)mergeFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromInputStream:(id)arg1;
- (id)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromData:(id)arg1;
- (id)mergeUnknownFields:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)clear;
- (id)clone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

