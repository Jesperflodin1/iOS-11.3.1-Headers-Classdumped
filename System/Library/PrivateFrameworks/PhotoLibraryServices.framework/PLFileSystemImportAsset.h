/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableSet, NSDate;

@interface PLFileSystemImportAsset : NSObject {

	int assetKind;
	NSMutableSet* _urls;
	NSDate* _dateCreated;
	NSObject* _destinationAlbum;

}

@property (nonatomic,retain) NSMutableSet * urls;                                      //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) NSDate * dateCreated;                                     //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> destinationAlbum;              //@synthesize destinationAlbum=_destinationAlbum - In the implementation block
@property (assign,nonatomic) int assetKind; 
-(NSMutableSet *)urls;
-(void)setUrls:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)initWithURLs:(id)arg1 creationDate:(id)arg2 destinationAlbum:(NSObject*)arg3 assetKind:(int)arg4 ;
-(NSObject*<PLAlbumProtocol>)destinationAlbum;
-(int)assetKind;
-(BOOL)isCameraKit;
-(void)setDestinationAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)setAssetKind:(int)arg1 ;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
@end
