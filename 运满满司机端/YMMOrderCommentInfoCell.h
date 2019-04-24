//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMOrderDetailBaseCell.h"

@class UIButton, UIImageView, UILabel, UIView, YMMOrderCommentInfoModel, YMMOrderCommentInfoTagView;

@interface YMMOrderCommentInfoCell : YMMOrderDetailBaseCell
{
    UILabel *_titleLab;
    UIImageView *_commentLevelIcon;
    UILabel *_commentResultLab;
    YMMOrderCommentInfoTagView *_tagsView;
    UILabel *_commentContentLab;
    UIView *_commentCanChangeCommentView;
    UIView *_horizontalLineView;
    UIView *_verticalLineView;
    UIButton *_changeCommentBtn;
    UIButton *_deleteCommentBtn;
    UIView *_bottomView;
    YMMOrderCommentInfoModel *_commentInfo;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) YMMOrderCommentInfoModel *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *deleteCommentBtn; // @synthesize deleteCommentBtn=_deleteCommentBtn;
@property(retain, nonatomic) UIButton *changeCommentBtn; // @synthesize changeCommentBtn=_changeCommentBtn;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) UIView *horizontalLineView; // @synthesize horizontalLineView=_horizontalLineView;
@property(retain, nonatomic) UIView *commentCanChangeCommentView; // @synthesize commentCanChangeCommentView=_commentCanChangeCommentView;
@property(retain, nonatomic) UILabel *commentContentLab; // @synthesize commentContentLab=_commentContentLab;
@property(retain, nonatomic) YMMOrderCommentInfoTagView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UILabel *commentResultLab; // @synthesize commentResultLab=_commentResultLab;
@property(retain, nonatomic) UIImageView *commentLevelIcon; // @synthesize commentLevelIcon=_commentLevelIcon;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;
- (void)insertModel:(id)arg1;
- (void)deleteCommentBtnClicked:(id)arg1;
- (void)changeCommentBtnClicked:(id)arg1;
- (void)resetContraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

