/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelObject, MPMediaLibraryView, NSNumber;

@interface MPModelLibraryKeepLocalStatusRequestOperation : MPAsyncOperation {

	/*^block*/id _downloadablePlaylistItemEntityQueryBlock;
	long long _enableState;
	MPModelObject* _identifyingModelObject;
	MPMediaLibraryView* _libraryView;
	NSNumber* _redownloadableItemCount;
	/*^block*/id _responseHandler;
	shared_ptr<mlcore::EntityQuery>* _downloadableItemsQuery;

}

@property (assign,nonatomic) shared_ptr<mlcore::EntityQuery>* downloadableItemsQuery;              //@synthesize downloadableItemsQuery=_downloadableItemsQuery - In the implementation block
@property (nonatomic,copy) id downloadablePlaylistItemEntityQueryBlock;                            //@synthesize downloadablePlaylistItemEntityQueryBlock=_downloadablePlaylistItemEntityQueryBlock - In the implementation block
@property (assign,nonatomic) long long enableState;                                                //@synthesize enableState=_enableState - In the implementation block
@property (nonatomic,retain) MPModelObject * identifyingModelObject;                               //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
@property (nonatomic,copy) MPMediaLibraryView * libraryView;                                       //@synthesize libraryView=_libraryView - In the implementation block
@property (nonatomic,copy) NSNumber * redownloadableItemCount;                                     //@synthesize redownloadableItemCount=_redownloadableItemCount - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                     //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(void)setDownloadablePlaylistItemEntityQueryBlock:(id)arg1 ;
-(void)setDownloadableItemsQuery:(shared_ptr<mlcore::EntityQuery>*)arg1 ;
-(MPMediaLibraryView *)libraryView;
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
-(void)setIdentifyingModelObject:(MPModelObject *)arg1 ;
-(shared_ptr<mlcore::EntityQuery>*)downloadableItemsQuery;
-(id)downloadablePlaylistItemEntityQueryBlock;
-(void)setRedownloadableItemCount:(NSNumber *)arg1 ;
-(MPModelObject *)identifyingModelObject;
-(NSNumber *)redownloadableItemCount;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
@end
