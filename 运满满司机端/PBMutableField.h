//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBField.h"

@interface PBMutableField : PBField
{
}

+ (id)field;
- (id)addGroup:(id)arg1;
- (id)addLengthDelimited:(id)arg1;
- (id)addFixed64:(long long)arg1;
- (id)addFixed32:(int)arg1;
- (id)addVarint:(long long)arg1;
- (id)mergeFromField:(id)arg1;
- (id)clear;
- (void)dealloc;

@end

