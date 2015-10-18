//
//  ViewController.h
//  Alcolator
//
//  Created by Carlos Calderon on 10/16/15.
//  Copyright (c) 2015 Carlos Calderon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

@end

