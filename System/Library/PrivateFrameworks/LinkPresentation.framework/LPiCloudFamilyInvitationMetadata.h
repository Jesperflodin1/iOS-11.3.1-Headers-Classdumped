/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformerAdaptor.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformerAdaptor.h>

@class NSString, LPImage;

@interface LPiCloudFamilyInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _action;
	LPImage* _image;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * action;                //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) LPImage * image;                //@synthesize image=_image - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setImage:(LPImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)action;
-(LPImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)populateLinkMetadataForBackwardCompatibility:(id)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
@end

