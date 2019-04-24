//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIColor, UILabel;

@interface YMMVoiceTextView : UITextView
{
    _Bool _autoHeight;
    UILabel *_placeholderLab;
    NSString *_placeholder;
    UIColor *_placeholderColor;
    double _verticalLineSpace;
    double _maxHeight;
    double _minHeight;
    CDUnknownBlockType _textDidChangeBlock;
    CDUnknownBlockType _textViewAutoHeightBlock;
    struct UIEdgeInsets _placeholderLabelInsets;
}

@property(copy, nonatomic) CDUnknownBlockType textViewAutoHeightBlock; // @synthesize textViewAutoHeightBlock=_textViewAutoHeightBlock;
@property(copy, nonatomic) CDUnknownBlockType textDidChangeBlock; // @synthesize textDidChangeBlock=_textDidChangeBlock;
@property(nonatomic) _Bool autoHeight; // @synthesize autoHeight=_autoHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double verticalLineSpace; // @synthesize verticalLineSpace=_verticalLineSpace;
@property(nonatomic) struct UIEdgeInsets placeholderLabelInsets; // @synthesize placeholderLabelInsets=_placeholderLabelInsets;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UILabel *placeholderLab; // @synthesize placeholderLab=_placeholderLab;
- (void).cxx_destruct;
- (id)attrs;
- (double)calculateHeight;
- (void)autoLayoutHeight;
- (void)ymm_setAttributedString;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)addNotifications;
- (void)reloadPlaceholderLabel;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
@property(nonatomic) long long limitTextLength;

@end

