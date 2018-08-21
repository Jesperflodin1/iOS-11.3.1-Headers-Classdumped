/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXTopVideoControlsProviding.h>

@class SXVolumeButton, SXLearnMoreButton, SXAdPrivacyButton, SXMediaSelectionButton, SXShareButton, NSString;

@interface SXTopVideoControlsProvider : NSObject <SXTopVideoControlsProviding> {

	SXVolumeButton* _volumeButton;
	SXMediaSelectionButton* _mediaSelectionButton;
	SXLearnMoreButton* _learnMoreButton;
	SXAdPrivacyButton* _adPrivacyButton;
	SXShareButton* _shareButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXVolumeButton * volumeButton;                              //@synthesize volumeButton=_volumeButton - In the implementation block
@property (nonatomic,readonly) SXLearnMoreButton * learnMoreButton;                        //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,readonly) SXAdPrivacyButton * adPrivacyButton;                        //@synthesize adPrivacyButton=_adPrivacyButton - In the implementation block
@property (nonatomic,readonly) SXMediaSelectionButton * mediaSelectionButton;              //@synthesize mediaSelectionButton=_mediaSelectionButton - In the implementation block
@property (nonatomic,readonly) SXShareButton * shareButton;                                //@synthesize shareButton=_shareButton - In the implementation block
-(SXLearnMoreButton *)learnMoreButton;
-(SXShareButton *)shareButton;
-(SXVolumeButton *)volumeButton;
-(SXAdPrivacyButton *)adPrivacyButton;
-(SXMediaSelectionButton *)mediaSelectionButton;
-(id)initWithVolumeButton:(id)arg1 mediaSelectionButton:(id)arg2 learnMoreButton:(id)arg3 adPrivacyButton:(id)arg4 shareButton:(id)arg5 ;
@end

