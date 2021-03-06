//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSNumber, NSString;

@interface YMMUpdateCommentCommitModel : YMMBaseModel
{
    NSString *_commentId;
    NSNumber *_orderId;
    long long _score;
    NSString *_content;
    NSString *_remark;
    NSString *_selectedTags;
}

@property(copy, nonatomic) NSString *selectedTags; // @synthesize selectedTags=_selectedTags;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end

