/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUIAudioRoutePickerControllerDelegate;
@class NSString, UIWindow, SiriRoutePickerAlertController;

@interface SiriUIAudioRoutePickerController : NSObject {

	id<SiriUIAudioRoutePickerControllerDelegate> _delegate;
	NSString* _audioCategory;
	NSString* _audioMode;
	UIWindow* _window;
	BOOL _hasRoutesToPick;
	BOOL _bluetoothIsPicked;
	SiriRoutePickerAlertController* _pickerAlertController;

}

@property (assign,nonatomic,__weak) id<SiriUIAudioRoutePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SiriRoutePickerAlertController * pickerAlertController;                    //@synthesize pickerAlertController=_pickerAlertController - In the implementation block
+(id)_nameForRouteInfo:(id)arg1 isSelected:(BOOL*)arg2 isBluetooth:(BOOL*)arg3 isOverride:(BOOL*)arg4 audioRouteName:(id*)arg5 ;
-(id<SiriUIAudioRoutePickerControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIAudioRoutePickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)_pickableRoutesChanged:(id)arg1 ;
-(void)_routeChanged:(id)arg1 ;
-(void)refreshRoutes;
-(void)_showAlertControllerFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_selectRouteWithInfo:(id)arg1 ;
-(void)_dismissAlertController:(BOOL)arg1 ;
-(SiriRoutePickerAlertController *)pickerAlertController;
-(void)_fetchPickableRoutesWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeWindow;
-(BOOL)isShowingPicker;
-(void)cancelPickerAnimated:(BOOL)arg1 ;
-(id)initWithCategory:(id)arg1 mode:(id)arg2 delegate:(id)arg3 ;
-(BOOL)hasRoutesToPick;
-(BOOL)bluetoothIsPicked;
-(void)showPickerFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPickerAlertController:(SiriRoutePickerAlertController *)arg1 ;
@end

