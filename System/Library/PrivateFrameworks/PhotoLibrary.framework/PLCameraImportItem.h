/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, PLManagedAsset, NSError, UIImage;

@interface PLCameraImportItem : NSObject {

	NSMutableArray* _sortedRepresentations;
	BOOL _metadataRequested;
	BOOL _shouldImport;
	int _thumbnailState;
	NSString* _identifier;
	NSString* _parentFolder;
	NSString* _basePath;
	NSString* _eventName;
	PLManagedAsset* _importedAsset;
	NSError* _importError;

}

@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentFolder;              //@synthesize parentFolder=_parentFolder - In the implementation block
@property (nonatomic,retain) NSString * basePath;                         //@synthesize basePath=_basePath - In the implementation block
@property (nonatomic,retain) NSString * eventName;                        //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) PLManagedAsset * importedAsset;              //@synthesize importedAsset=_importedAsset - In the implementation block
@property (nonatomic,retain,readonly) UIImage * thumbnail; 
@property (assign,nonatomic) int thumbnailState;                          //@synthesize thumbnailState=_thumbnailState - In the implementation block
@property (assign,nonatomic) BOOL shouldImport;                           //@synthesize shouldImport=_shouldImport - In the implementation block
@property (nonatomic,retain) NSError * importError;                       //@synthesize importError=_importError - In the implementation block
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(BOOL)isLocked;
-(unsigned long long)fileSize;
-(UIImage *)thumbnail;
-(NSString *)parentFolder;
-(void)setBasePath:(NSString *)arg1 ;
-(void)requestThumbnail;
-(BOOL)isRaw;
-(id)initWithIdentifier:(id)arg1 parentFolder:(id)arg2 ;
-(void)addRepresentationForCameraFile:(id)arg1 ;
-(void)removeRepresentationForCameraFile:(id)arg1 ;
-(void)requestMetadata;
-(id)representationForCameraFile:(id)arg1 ;
-(BOOL)hasAllMetadata;
-(int)thumbnailState;
-(void)setThumbnailState:(int)arg1 ;
-(BOOL)shouldImport;
-(void)setShouldImport:(BOOL)arg1 ;
-(void)setImportError:(NSError *)arg1 ;
-(id)masterPath;
-(id)representationsSortedForImport;
-(void)markAsInLibrary;
-(NSError *)importError;
-(void)_addRepresentation:(id)arg1 ;
-(void)_removeRepresentation:(id)arg1 ;
-(id)_firstRepresentationPassingTest:(/*^block*/id)arg1 ;
-(id)_masterRepresentation;
-(BOOL)_hasAnyRepresentationPassingTest:(/*^block*/id)arg1 ;
-(id)fileExtensions;
-(id)_fileExtensionOfFirstRepresentationPassingTest:(/*^block*/id)arg1 ;
-(void)clearMetadata;
-(PLManagedAsset *)importedAsset;
-(void)setImportedAsset:(PLManagedAsset *)arg1 ;
-(id)creationDate;
-(BOOL)canRequestThumbnail;
-(BOOL)isStandaloneMovie;
-(id)movieExtension;
-(id)metadataForRepresentationWithFileExtension:(id)arg1 ;
-(BOOL)isInLibraryForce:(BOOL)arg1 ;
-(BOOL)isMovie;
-(void)clearThumbnail;
-(id)representations;
-(BOOL)canRequestMetadata;
-(BOOL)isStandalonePhoto;
-(id)rawExtension;
-(id)imageExtension;
-(id)audioExtension;
-(id)otherExtensions;
-(BOOL)isAudio;
-(BOOL)isOnDisk;
-(NSString *)basePath;
-(BOOL)isImage;
@end
