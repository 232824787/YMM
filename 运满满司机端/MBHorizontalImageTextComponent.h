//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBBaseModuleView.h"

@class UIImageView, UILabel;

@interface MBHorizontalImageTextComponent : MBBaseModuleView
{
    UIImageView *_portraitImageView;
    UILabel *_routeLabel;
    UILabel *_driverMessageLabel;
}

+ (double)heightForViewModel:(id)arg1;
@property(retain, nonatomic) UILabel *driverMessageLabel; // @synthesize driverMessageLabel=_driverMessageLabel;
@property(retain, nonatomic) UILabel *routeLabel; // @synthesize routeLabel=_routeLabel;
@property(retain, nonatomic) UIImageView *portraitImageView; // @synthesize portraitImageView=_portraitImageView;
- (void).cxx_destruct;
- (id)componentViewModel;
- (void)refreshView;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

