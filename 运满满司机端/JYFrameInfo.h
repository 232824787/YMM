//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableData;

@interface JYFrameInfo : NSObject
{
    unsigned char _STX;
    unsigned char _SN;
    unsigned char _CTL;
    long long _InfoLength;
    NSMutableData *_Info;
    NSMutableData *_Checksum;
    NSMutableArray *_arrayPackages;
}

+ (void)setMaxFrameDataLen:(short)arg1;
@property(retain, nonatomic) NSMutableArray *arrayPackages; // @synthesize arrayPackages=_arrayPackages;
@property(retain, nonatomic) NSMutableData *Checksum; // @synthesize Checksum=_Checksum;
@property(retain, nonatomic) NSMutableData *Info; // @synthesize Info=_Info;
@property(nonatomic) long long InfoLength; // @synthesize InfoLength=_InfoLength;
@property(nonatomic) unsigned char CTL; // @synthesize CTL=_CTL;
@property(nonatomic) unsigned char SN; // @synthesize SN=_SN;
@property(nonatomic) unsigned char STX; // @synthesize STX=_STX;
- (void).cxx_destruct;
- (id)splitInfoData;
- (unsigned char)checkNum:(id)arg1;
- (void)computeCheckNum;
- (id)init;

@end

