/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>
#import <libobjc.A.dylib/NTKCFaceDetailToggleCellDelegate.h>

@class NTKCFaceDetailTapToSpeakCell, NTKCFaceDetailTapToSpeakDescriptionCell, NPSDomainAccessor, NSString;

@interface NTKCFaceDetailTapToSpeakSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate> {

	NTKCFaceDetailTapToSpeakCell* _tapCell;
	NTKCFaceDetailTapToSpeakDescriptionCell* _descriptionCell;
	NPSDomainAccessor* _tapToSpeakDomainAccessor;

}

@property (nonatomic,retain) NTKCFaceDetailTapToSpeakCell * tapCell;                                 //@synthesize tapCell=_tapCell - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailTapToSpeakDescriptionCell * descriptionCell;              //@synthesize descriptionCell=_descriptionCell - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * tapToSpeakDomainAccessor;                           //@synthesize tapToSpeakDomainAccessor=_tapToSpeakDomainAccessor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasTapToSpeakSectionForFace:(id)arg1 inGallery:(BOOL)arg2 ;
-(void)_commonInit;
-(void)toggleCell:(id)arg1 didToggle:(BOOL)arg2 ;
-(void)faceDidChange;
-(id)titleForHeader;
-(void)setTapCell:(NTKCFaceDetailTapToSpeakCell *)arg1 ;
-(void)setDescriptionCell:(NTKCFaceDetailTapToSpeakDescriptionCell *)arg1 ;
-(void)setTapToSpeakDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(NTKCFaceDetailTapToSpeakCell *)tapCell;
-(NTKCFaceDetailTapToSpeakDescriptionCell *)descriptionCell;
-(NPSDomainAccessor *)tapToSpeakDomainAccessor;
@end

