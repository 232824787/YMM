//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface DTDictationPlaceholderView : UIView
{
    unsigned long long _phase;
    NSTimer *_phaseTimer;
    id _context;
}

+ (id)placeholderView;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_phaseTimerTick:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)_darkDotColor;
- (id)_lightDotColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

