//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMAdvertDBHandle : NSObject
{
}

+ (_Bool)clearDBData;
+ (void)updateToDBWithAdType:(long long)arg1 AdArray:(id)arg2;
+ (void)insertToDBWithAdArray:(id)arg1;
+ (_Bool)deleteAdvertWithAdType:(long long)arg1;
+ (id)advertArrayWithAdType:(long long)arg1;

@end

