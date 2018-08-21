/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol CNPostalAddressEditorDelegate;
@interface CNPostalAddressEditorNavigationController : UINavigationController {

	id<CNPostalAddressEditorDelegate> _addressEditorDelegate;

}

@property (assign,nonatomic,__weak) id<CNPostalAddressEditorDelegate> addressEditorDelegate;              //@synthesize addressEditorDelegate=_addressEditorDelegate - In the implementation block
-(void)setTitle:(id)arg1 ;
-(id<CNPostalAddressEditorDelegate>)addressEditorDelegate;
-(void)doneWithContact:(id)arg1 propertyKey:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(BOOL)arg3 ;
-(id)initWithPropertyKey:(id)arg1 label:(id)arg2 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 addressDictionary:(id)arg3 label:(id)arg4 ;
-(void)setAddressEditorDelegate:(id<CNPostalAddressEditorDelegate>)arg1 ;
@end

