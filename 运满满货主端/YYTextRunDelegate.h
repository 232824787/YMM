//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary;

@interface YYTextRunDelegate : NSObject <NSCopying, NSCoding>
{
    NSDictionary *_userInfo;
    double _ascent;
    double _descent;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double descent; // @synthesize descent=_descent;
@property(nonatomic) double ascent; // @synthesize ascent=_ascent;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (const struct __CTRunDelegate *)CTRunDelegate;

@end

