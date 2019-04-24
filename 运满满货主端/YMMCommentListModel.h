//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSNumber, NSString, YMMCommentButton;

@interface YMMCommentListModel : YMMCommonModel
{
    _Bool _commentBtnShows;
    _Bool _detailBtnShows;
    _Bool _dealBtnShows;
    _Bool _showMoreOperation;
    long long _score;
    YMMCommentButton *_commentBtn;
    YMMCommentButton *_detailBtn;
    YMMCommentButton *_dealBtn;
    NSString *_startCity;
    NSString *_endCity;
    NSString *_cargoName;
    NSNumber *_orderId;
    NSString *_imageUrl;
    NSString *_username;
    NSString *_showsUserName;
    NSNumber *_createTime;
    NSString *_createTimeString;
    NSString *_showMsg;
    NSArray *_tagContentList;
    NSNumber *_commentId;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSNumber *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSArray *tagContentList; // @synthesize tagContentList=_tagContentList;
@property(copy, nonatomic) NSString *showMsg; // @synthesize showMsg=_showMsg;
@property(copy, nonatomic) NSString *createTimeString; // @synthesize createTimeString=_createTimeString;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *showsUserName; // @synthesize showsUserName=_showsUserName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *cargoName; // @synthesize cargoName=_cargoName;
@property(copy, nonatomic) NSString *endCity; // @synthesize endCity=_endCity;
@property(copy, nonatomic) NSString *startCity; // @synthesize startCity=_startCity;
@property(nonatomic) _Bool showMoreOperation; // @synthesize showMoreOperation=_showMoreOperation;
@property(nonatomic) _Bool dealBtnShows; // @synthesize dealBtnShows=_dealBtnShows;
@property(retain, nonatomic) YMMCommentButton *dealBtn; // @synthesize dealBtn=_dealBtn;
@property(nonatomic) _Bool detailBtnShows; // @synthesize detailBtnShows=_detailBtnShows;
@property(retain, nonatomic) YMMCommentButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(nonatomic) _Bool commentBtnShows; // @synthesize commentBtnShows=_commentBtnShows;
@property(retain, nonatomic) YMMCommentButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(nonatomic) long long score; // @synthesize score=_score;
- (void).cxx_destruct;
- (id)dateString:(id)arg1;

@end

