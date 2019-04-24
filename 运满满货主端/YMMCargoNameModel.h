//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMCargoNameModel : YMMCommonModel
{
    NSString *_firstCategoryId;
    NSString *_firstCategoryName;
    NSString *_secondCategoryId;
    NSString *_secondCategoryName;
    NSString *_associateWordId;
    NSString *_associateWord;
}

@property(copy, nonatomic) NSString *associateWord; // @synthesize associateWord=_associateWord;
@property(copy, nonatomic) NSString *associateWordId; // @synthesize associateWordId=_associateWordId;
@property(copy, nonatomic) NSString *secondCategoryName; // @synthesize secondCategoryName=_secondCategoryName;
@property(copy, nonatomic) NSString *secondCategoryId; // @synthesize secondCategoryId=_secondCategoryId;
@property(copy, nonatomic) NSString *firstCategoryName; // @synthesize firstCategoryName=_firstCategoryName;
@property(copy, nonatomic) NSString *firstCategoryId; // @synthesize firstCategoryId=_firstCategoryId;
- (void).cxx_destruct;
- (_Bool)isSameModel:(id)arg1;
- (_Bool)hasCargoName;
- (_Bool)isNewCargoName;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

