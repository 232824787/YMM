//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseBuffer.h"

@class NSString;

@interface MmapBuffer : BaseBuffer
{
    int _fd;
    NSString *_mmapPath;
}

@property(retain, nonatomic) NSString *mmapPath; // @synthesize mmapPath=_mmapPath;
@property(nonatomic) int fd; // @synthesize fd=_fd;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (void)flushToDisk;

@end

