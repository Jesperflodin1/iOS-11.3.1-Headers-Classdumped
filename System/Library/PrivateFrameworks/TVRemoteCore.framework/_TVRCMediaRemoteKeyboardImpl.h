/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/_TVRCMediaRemoteKeyboardAdapterDelegate.h>
#import <TVRemoteCore/_TVRCKeyboardImpl.h>

@class TVRCKeyboardController, _TVRCMRTelevisionWrapper, TVRCKeyboardAttributes, _TVRCMediaRemoteKeyboardAdapter, NSString;

@interface _TVRCMediaRemoteKeyboardImpl : NSObject <_TVRCMediaRemoteKeyboardAdapterDelegate, _TVRCKeyboardImpl> {

	BOOL _editing;
	TVRCKeyboardController* _keyboardController;
	_TVRCMRTelevisionWrapper* _television;
	TVRCKeyboardAttributes* _currentAttributes;
	_TVRCMediaRemoteKeyboardAdapter* _adapter;

}

@property (assign,nonatomic) BOOL editing;                                                    //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) TVRCKeyboardAttributes * currentAttributes;                      //@synthesize currentAttributes=_currentAttributes - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteKeyboardAdapter * adapter;                       //@synthesize adapter=_adapter - In the implementation block
@property (assign,nonatomic,__weak) TVRCKeyboardController * keyboardController;              //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                           //@synthesize television=_television - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_TVRCMediaRemoteKeyboardAdapter *)adapter;
-(void)setAdapter:(_TVRCMediaRemoteKeyboardAdapter *)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)editing;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(id)attributes;
-(TVRCKeyboardController *)keyboardController;
-(_TVRCMRTelevisionWrapper *)television;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)setKeyboardController:(TVRCKeyboardController *)arg1 ;
-(void)_textEditingHandlerUpdatedWithEvent:(unsigned)arg1 session:(id)arg2 ;
-(void)_sessionDidBegin:(id)arg1 ;
-(void)_sessionDidEnd:(id)arg1 ;
-(void)_sessionTextDidChange:(id)arg1 ;
-(void)_sessionAttributesDidChange:(id)arg1 ;
-(void)keyboardAdapter:(id)arg1 receivedUnexpectedTextUpdate:(id)arg2 ;
-(void)sendReturnKey;
-(TVRCKeyboardAttributes *)currentAttributes;
-(void)setCurrentAttributes:(TVRCKeyboardAttributes *)arg1 ;
@end

