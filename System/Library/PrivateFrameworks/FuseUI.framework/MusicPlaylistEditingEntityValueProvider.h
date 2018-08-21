/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityValueProviding.h>

@class NSMutableDictionary, UIImage, MusicProductDescription, NSString;

@interface MusicPlaylistEditingEntityValueProvider : NSObject <MusicEntityValueProviding> {

	NSMutableDictionary* _properties;
	UIImage* _artworkImage;

}

@property (nonatomic,retain) UIImage * artworkImage;                                  //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) MusicProductDescription * productDescription; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)artworkImage;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(void)setProductDescription:(MusicProductDescription *)arg1 ;
-(MusicProductDescription *)productDescription;
@end

