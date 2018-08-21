/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSInputClue.h>

@class CLSPerson, PHPhotoLibrary;

@interface CLSInputPeopleClue : CLSInputClue {

	CLSPerson* _person;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _numberOfFaces;

}

@property (nonatomic,retain) CLSPerson * person;                                //@synthesize person=_person - In the implementation block
@property (assign,nonatomic,__weak) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFaces;                  //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
+(id)clueWithPeople:(id)arg1 ;
+(id)clueWithPeopleUUID:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)cluesWithPeoples:(id)arg1 ;
+(id)cluesWithPeopleUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)description;
-(id)name;
-(void)setPerson:(CLSPerson *)arg1 ;
-(CLSPerson *)person;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setNumberOfFaces:(unsigned long long)arg1 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)_prepareOperation;
-(unsigned long long)numberOfFaces;
@end

