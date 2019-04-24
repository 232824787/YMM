//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableData, NSMutableDictionary, NSString;

@interface JLReceiveBuffer : NSObject
{
    NSString *_swValue;
    int mode;
    _Bool _isCheck;
    NSMutableData *_dataBuffer;
    NSMutableDictionary *_resultDict;
    NSMutableArray *_coreArray;
    NSMutableData *_coreData;
}

+ (id)jlShared;
@property(nonatomic) _Bool isCheck; // @synthesize isCheck=_isCheck;
@property(retain, nonatomic) NSMutableData *coreData; // @synthesize coreData=_coreData;
@property(retain, nonatomic) NSMutableArray *coreArray; // @synthesize coreArray=_coreArray;
@property(retain, nonatomic) NSMutableDictionary *resultDict; // @synthesize resultDict=_resultDict;
@property(retain, nonatomic) NSMutableData *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
- (void).cxx_destruct;
- (id)showSWValue;
- (void)analyseA5WorkResponseData;
- (void)analyseA4WorkResponseData;
- (void)analyseA3WorkResponseData;
- (void)analyseA2WorkResponseData;
- (void)analyseA1WorkResponseData;
- (id)getAOSumData;
- (void)analyseA0WorkResponseData;
- (id)jlGetDataResult;
- (int)jlSortDataBuffer;
- (int)jlReceiveData:(id)arg1 withIsCheck:(_Bool)arg2;
- (void)removeResultArray;

@end

