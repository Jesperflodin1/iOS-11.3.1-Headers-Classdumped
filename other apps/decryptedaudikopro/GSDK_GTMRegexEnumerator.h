//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class GSDK_GTMRegex, NSData;

@interface GSDK_GTMRegexEnumerator : NSEnumerator
{
    GSDK_GTMRegex *regex_;
    NSData *utf8StrBuf_;
    _Bool allSegments_;
    _Bool treatStartOfNewSegmentAsBeginningOfString_;
    long long curParseIndex_;
    CDStruct_912cb5d2 *savedRegMatches_;
}

- (id)description;
- (id)nextObject;
- (void)treatStartOfNewSegmentAsBeginningOfString:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRegex:(id)arg1 processString:(id)arg2 allSegments:(_Bool)arg3;

@end

