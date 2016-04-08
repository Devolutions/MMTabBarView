//
//  MMUnifiedTabStyle.h
//  --------------------
//
//  Created by Keith Blount on 30/04/2006.
//  Copyright 2006 Keith Blount. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MMTabStyle.h"

@interface MMUnifiedTabStyle : NSObject <MMTabStyle>
{
	CGFloat _leftMarginForTabBarView;
	
	@private
	NSImage				*unifiedCloseButton;
	NSImage				*unifiedCloseButtonDown;
	NSImage				*unifiedCloseButtonOver;
	NSImage				*unifiedCloseDirtyButton;
	NSImage				*unifiedCloseDirtyButtonDown;
	NSImage				*unifiedCloseDirtyButtonOver;
}

@property (assign) CGFloat leftMarginForTabBarView;

@end
