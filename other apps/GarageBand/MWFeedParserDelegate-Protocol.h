//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MWFeedInfo, MWFeedItem, MWFeedParser, NSError;

@protocol MWFeedParserDelegate <NSObject>

@optional
- (void)feedParser:(MWFeedParser *)arg1 didFailWithError:(NSError *)arg2;
- (void)feedParserDidFinish:(MWFeedParser *)arg1;
- (void)feedParser:(MWFeedParser *)arg1 didParseFeedItem:(MWFeedItem *)arg2;
- (void)feedParser:(MWFeedParser *)arg1 didParseFeedInfo:(MWFeedInfo *)arg2;
- (void)feedParserDidStart:(MWFeedParser *)arg1;
@end

