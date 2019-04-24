//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIFont;

@interface AMFontModelCreator : NSObject
{
    double _fontSize;
    long long _dataSize;
    UIFont *_font;
    char *_data;
    struct CGContext *_context;
    long long _version;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)getCurrentFontName:(char *)arg1 maxLength:(int)arg2;
- (char *)fontModelForChar:(unsigned short)arg1 fontsize:(unsigned int)arg2;
- (void)createContext;
- (_Bool)createContextOnMainThread;
- (id)init;
- (void)dealloc;

@end

