/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol WebBookmarksClientDelegateProtocol;
@class WebBookmarksXPCConnection, NSString;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCConnection* _connection;
	id<WebBookmarksClientDelegateProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<WebBookmarksClientDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<WebBookmarksClientDelegateProtocol>)delegate;
-(void)setDelegate:(id<WebBookmarksClientDelegateProtocol>)arg1 ;
-(void)clearReadingListArchiveWithUUID:(id)arg1 ;
-(void)clearAllReadingListArchives;
-(void)didFinishFetching;
-(void)didUpdateProgressWithMessage:(id)arg1 ;
-(void)didStartFetchingReadingListItemWithMessage:(id)arg1 ;
-(void)didStopFetchingReadingListItemWithMessage:(id)arg1 ;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)startReadingListFetcher;
@end

