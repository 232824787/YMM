//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JYUtil : NSObject
{
}

+ (id)bleErrorCode:(unsigned char)arg1;
+ (unsigned char)isLeError:(id)arg1;
+ (id)cosSWDescription:(id)arg1;
+ (id)hexStringToNSData:(id)arg1;
+ (id)FormatNSDate:(id)arg1 format:(id)arg2;
+ (void)hexStringToBytes:(id)arg1 bytes:(char *)arg2;
+ (id)bytesToHexString:(char *)arg1 len:(int)arg2;
+ (void)intToBytes:(int)arg1 bytes:(char *)arg2 flag:(_Bool)arg3;
+ (int)bytesToInt:(char *)arg1 len:(int)arg2 flag:(_Bool)arg3;

@end

