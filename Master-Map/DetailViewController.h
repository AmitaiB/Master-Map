//
//  DetailViewController.h
//  Master-Map
//
//  Created by Amitai Blickstein on 8/17/15.
//  Copyright (c) 2015 Amitai Blickstein, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

