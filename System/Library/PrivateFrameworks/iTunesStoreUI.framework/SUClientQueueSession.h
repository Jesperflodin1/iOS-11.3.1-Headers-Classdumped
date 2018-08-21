/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject {

	long long _count;
	NSArray* _downloadKinds;
	SSDownloadManagerOptions* _managerOptions;
	id _queue;

}

@property (assign,nonatomic) long long count;                                      //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSArray * downloadKinds;                                //@synthesize downloadKinds=_downloadKinds - In the implementation block
@property (nonatomic,copy) SSDownloadManagerOptions * managerOptions;              //@synthesize managerOptions=_managerOptions - In the implementation block
@property (nonatomic,retain) id queue;                                             //@synthesize queue=_queue - In the implementation block
-(long long)count;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(SSDownloadManagerOptions *)managerOptions;
-(NSArray *)downloadKinds;
-(void)setManagerOptions:(SSDownloadManagerOptions *)arg1 ;
-(void)setDownloadKinds:(NSArray *)arg1 ;
@end

